#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H

#include "Account.h"


class CheckingAccount: public Account {

public:
    CheckingAccount();

    float checkDeposite() const override;
    
    std::vector<std::vector<std::string>> checkHistory() const override;
    

    void withdraw(float moneyAmout) override;
    

    void deposite(float moneyAmout) override;

private:

};

#endif 