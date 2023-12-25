#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <vector>
#include <string>


class Account {
public: 
    
virtual float checkDeposite() const =0;
    
virtual std::vector<std::vector<std::string>> checkHistory() const=0;
    

virtual void withdraw(float moneyAmout) =0;
    

virtual void deposite(float moneyAmout) =0;

};

#endif