#include<iostream>

using namespace std;


int main(){

    int temp;
    cout << "Enter the temperature of the tea (in \u00B0C): ";

    cin >> temp;

    if(temp > 100){
        cout << "Tea is TOO HOT!!" << endl;
    } else if(temp >= 80 && temp <= 100){
        cout << "Tea is in Perfect Condition"<< endl;
    } else {
        cout << "Tea is Too COLD!!" << endl;
    }
    
    return 0;
}