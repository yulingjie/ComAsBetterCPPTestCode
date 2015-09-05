class FastString{
    char *m_psz;
    public:
    FastString(const char *psz);
    ~FastString(void);
    unsigned long Length(void) const;
    int Find(const char* psz) const;
};
