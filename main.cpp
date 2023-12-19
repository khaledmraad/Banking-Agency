#include <iostream>
#include "EBank.h"

using namespace std;

int main(){
    EBank* e=EBank::getInstance("this is our EBank");
    EBank* b=EBank::getInstance("this is our second EBank"); //won't work


    cout<<e->getValue()<<"\n";
    cout<<b->getValue()<<"\n";

    return 0;
}