#include<iostream>

using namespace std;


int main(){

    int choice;
    cout << "Select your different brewing methods\n";
    cout << "1. Boiling\n";
    cout << "2. Steeping\n";
    cout << "3. Iced Tea\n";
    cout << "Enter your choice from above options: ";
    cin >> choice;


    switch(choice){
        case 1: 
            cout << "You have selected Boiling for your Tea and it'll be ready in 10 mins." << endl;
            break;
        case 2:
            cout << "You have selected Steeping for your tean and it'll be reasy in 5 mins." << endl;
            break;
        case 3:
            cout << "You have selected Iced Tea and will be ready in 5 mins." << endl;
            break;
        
        default:
            cout << "Invalid option...."<< endl;
            break;
    }

    return 0;
}