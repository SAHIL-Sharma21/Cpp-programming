#include<iostream>

using namespace std;

int main() {

    int stock = 1 | 2 | 4;

    int teaType;
    cout << "Enter Tea type as (1 for Green, 2 for black, 4 for Oolong): ";
    cin >> teaType;

    if (teaType & stock){
        cout << "Input tea type is in stock" << endl;
    } else {
        cout << "Input is out of stock" << endl;
    }

    return 0;
}