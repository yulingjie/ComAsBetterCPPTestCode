#include "IExtensibleObject.h"
class IFastString:public IExtensibleObject{
    public:
        virtual unsigned long Length(void) const = 0;
        virtual int Find(const char* psz) const =0;
};
extern "C"
IFastString * CreateFastString(const char* psz);
