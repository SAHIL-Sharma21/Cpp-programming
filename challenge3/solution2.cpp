#include<iostream>


using namespace std;


int main(){

    int userAge;

    cout << "Enter you age to purchase our special Tea: ";
    cin >> userAge;


    if (userAge >= 18){
        cout << "You are allowed to add Tea to your cart" << endl;
    } else {
        cout << "You are to young to purchase." << endl; 
    }

    return 0;
}