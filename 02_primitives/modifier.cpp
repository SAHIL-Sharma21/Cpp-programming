#include <iostream>


using namespace std;

int main(){

    //modifiers ar signed and unsigned data types
    // unsigned smallTeaPack = -100; //what if we do not want the user to give -100
    // cout << smallTeaPack << endl;//4294967196 -> this is garbage value in the mem which we do not want

    unsigned smallTeaPack = 1200;
    cout << smallTeaPack << endl;//1200 -> actual/ expected value

    // double largeTeaStorage = 10000000;
    // cout << largeTeaStorage << endl;//1e+16

    long largeTeaStorage = 10000000;
    cout << largeTeaStorage << endl;//10000000


    short teaSample = 30;
    cout << teaSample << endl;



    return 0;
}