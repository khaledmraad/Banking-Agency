#include <iostream>
#include "EBank.h"

EBank* EBank::firsttime =nullptr;

EBank::EBank(const std::string& val) : value(val){
    std::cout<<"EBank created\n";
}

EBank::~EBank(){
    std::cout<<"this is destructed\n";
}

EBank* EBank::getInstance(const std::string& val){
    if (firsttime==nullptr){
        firsttime =new EBank(val);
    }
    else{
        std::cout<<"this is already created\n";
    }
    return firsttime;
}