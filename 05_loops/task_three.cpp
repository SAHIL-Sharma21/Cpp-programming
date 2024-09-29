#include<iostream>


using namespace std;

int main(){

    int teaCups;
    cout << "Enter the cups of tea: ";
    cin >> teaCups;
    //for loop
    for(int i = 1; i <= teaCups; i++){
        cout << "Brewing cup " << i <<  " of tea..." << endl;
    }

    cout << "Outside loop" << endl;

    return 0;
}