#include <iostream>
#include "EBank.h"

using namespace std;

int main(){
    EBank* e=EBank::getInstance("this is our EBank");
    EBank* b=EBank::getInstance("this is our second EBank");


    return 0;
}