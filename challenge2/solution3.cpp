#include<iostream>

using namespace std;


int main(){

    int numberOfTeaCups;
    bool isSubscribed;

    cout << "Enter the number of cups to buy: ";
    cin >> numberOfTeaCups;

    cout << "Are you a member for more than 1 year? (1 for Yes, 0 for No)";
    cin >> isSubscribed;

    if(isSubscribed || numberOfTeaCups >= 12){
        cout << "You are eligible for discount";
    } else {
        cout << "No discount for you";
    }

    return 0;
}