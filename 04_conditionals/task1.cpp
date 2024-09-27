#include<iostream>
#include<string>

using namespace std;

int main(){

    string teaOrder;

    cout << "Enter your tea order: ";
    getline(cin, teaOrder);


    //evaluate
    if(teaOrder == "Green Tea"){
        cout << "You have orderd Green Tea" << endl;
    }
    
    return 0;
}