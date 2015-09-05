class FastString;

class FastStringItf{
    FastString * m_pThis;

    public:
    FastStringItf(const char*psz);
    ~FastStringItf(void);
    unsigned long Length(void) const;
    int Find(const char* psz) const;
};
