#include"IFastString.h"

class IFastString2: public IFastString{
    public:
        virtual int FindN(const char* psz) const = 0;
};
