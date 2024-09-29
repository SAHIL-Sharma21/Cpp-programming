#include<iostream>

using namespace std;

int main(){

    int teaBags;

    while(true){
        cout << "Enter the bumber of tea bags left: ";
        cin >> teaBags;

        if (teaBags == 0){
            cout << "You are out of tea bags" << endl; 
            break;
        }
    }

    return 0;
}