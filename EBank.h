#ifndef _EBANK_H
#define _EBANK_H


class EBank
{
private:
    static EBank* firsttime;
    std::string value;
public:
    EBank(const std::string& val);
    ~EBank();

    static EBank* getInstance(const std::string& val);

    std::string getValue(){
        return value;
    }

};


#endif
