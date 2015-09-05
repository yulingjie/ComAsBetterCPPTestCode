#include"FastString.h"
#include "FastStringItf.h"
#include <cassert>

FastStringItf::FastStringItf(const char* psz)
    :m_pThis(new FastString(psz)){
        assert(m_pThis !=0);
    }

FastStringItf::~FastStringItf(void)
{
    delete m_pThis;
}
unsigned long FastStringItf::Length(void) const
{
    return m_pThis->Length();
}
int FastStringItf::Find(const char* psz) const
{
    return m_pThis->Find(psz);
}
