#include"IFastString.h"

class FastString:public IFastString{
    const unsigned long m_cch;
    char *m_psz;
    public:
    FastString(const char *psz);
    ~FastString(void);
    unsigned long Length(void) const;
    int Find(const char* psz) const;
    void Delete(void);
    int FindN(const char* psz) const;
};
