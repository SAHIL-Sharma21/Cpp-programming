#include<iostream>
#include<string>

using namespace std;


int main(){
    //solution 3
    string userFavouriteTea;
    int numberOfCups;

    cout << "Enter you favourite tea:\n";
    getline(cin, userFavouriteTea);
    
    cout << "How many cup of tea do you want?\n";
    cin >> numberOfCups;

    cout << "Your favourite tea is: " << userFavouriteTea << " and you like to have " << numberOfCups << " cups, Thank you!!! Legend coder." << endl;

    return 0;
}