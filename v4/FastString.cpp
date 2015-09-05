#include"FastString.h"
#include<string.h>

FastString::FastString(const char* psz)
    :m_cch(strlen(psz)),m_psz(new char[strlen(psz) +1]){
        strcpy(m_psz, psz);
    }

FastString::~FastString(void){
    delete[] m_psz;
}
unsigned long  FastString::Length(void) const{
    return m_cch;
}
int FastString::Find(const char *psz) const{
    if(*psz == *m_psz)
        return 0;
    return -1;
}

void FastString::Delete(void)
{
    delete this;
}
IFastString * CreateFastString(const char* psz){
    return new FastString(psz);
}
