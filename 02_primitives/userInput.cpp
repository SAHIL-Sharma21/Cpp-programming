#include<iostream>
#include<string>

using namespace std;



int main(){

    //takiong user input
    string userTea;
    int teaQuantity;

    cout << "what would you like to order in tea?\n";

    //1st way
    getline(cin, userTea);

    //ask for quant
    cout << "how many cups of " << userTea << "would you like to have? ";
    cin >>  teaQuantity;

    cout << "your order of the tea is " << teaQuantity << " of the " << userTea << endl;

    return 0;
}