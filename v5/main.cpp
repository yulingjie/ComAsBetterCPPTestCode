#include"IFastString2.h"
#include<iostream>
#include <dlfcn.h>
IFastString * CallCreateFastString(const char* psz);

int CallFindN(IFastString *fs)
{
    IFastString2 *fs2 =(IFastString2*) fs->Dynamic_Cast("IFastString2");
   if(fs2)
   {
      std::cout<<"FastString FindN: "<<fs2->FindN("test faststring2")<<std::endl;
   }
   else
   {
       std::cerr<<"Cannot cast to IFastString2"<<std::endl;
   }
   return 0;
}
int main(int argc, char** argv)
{
    //IFastString* fs = CreateFastString("test string");
    IFastString * fs = CallCreateFastString("test string");
    std::cout<<"FastString Length: "<< fs->Length()<<std::endl;
    CallFindN(fs);
    if(0 == fs->Find("test")    )
    {
        std::cout<<"FastString Find 'test'"<<std::endl;
    }
    else
    {
        std::cout<<"FastString 'test' not Found"<<std::endl;
    }
    fs->Delete();
}

typedef IFastString* (*FS)(const char* );
IFastString * CallCreateFastString(const char* psz)
{
    IFastString* pResult = NULL;
    static IFastString* (*pfn)(const char *) = 0;
    if(!pfn){

        void* lib_handle = dlopen("/home/ylj/Projects/test/comcpp/libFastString.so",RTLD_NOW | RTLD_GLOBAL);

        if(lib_handle)
        {

            pfn = (FS)dlsym(lib_handle,"CreateFastString");

        }
        else{
        }


        pResult = pfn ? pfn(psz) :0;
     //   dlclose(lib_handle);
    }
    return pResult;
}
