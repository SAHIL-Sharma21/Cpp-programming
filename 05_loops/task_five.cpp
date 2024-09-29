#include<iostream>
#include<string>

using namespace std;

int main(){

    //introducing list here and continue keyword
    //list is the collection of variable of same data types.

    string teaTypes[5] = {"Green Tea", "Black Tea", "Lemon Tea", "Oolong Tea", "Booba Tea"};

    for(int i = 0; i < 5; i++){
        if(teaTypes[i] == "Green Tea"){
            //continue
            continue;
        }
        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }
    
    return 0;
}