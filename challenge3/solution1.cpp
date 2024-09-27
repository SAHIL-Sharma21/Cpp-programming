#include<iostream>
#include<string>
using namespace std;


int main() {

    string userTea;

    cout << "Enter you Favourite Tea: ";
    getline(cin, userTea);

    if (userTea == "Oolong"){
        cout << "you have excellent choice" << endl;
    }

    return 0;
}