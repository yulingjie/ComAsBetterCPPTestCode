class IExtensibleObject {

    public:
        virtual void *Dynamic_Cast(const char* pszType) =0;
        virtual void Delete(void) = 0;
};
