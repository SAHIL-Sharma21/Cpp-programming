// ### **Challenge:** Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.

#include<iostream>

using namespace std;

int main(){

    bool isStudent;
    int cupCount;


    cout << "Are you a student (1 for Yes and 0 for No) ";
    cin >> isStudent;

    cout << "Enter the number of cup count you have purchased: ";
    cin >> cupCount;


    if (isStudent || cupCount >= 15) {
        cout << "You  are eligible for a discount";
    } else {
        cout << "You are not eligible fot a discount";
    }

    return 0;
}