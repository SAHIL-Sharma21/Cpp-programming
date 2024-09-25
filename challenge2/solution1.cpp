#include<iostream>

using namespace std;


int main(){

    int numberOfTeaPacks;
    double totalPrice, pricePerPack, finalPrice;

    cout << "Enter the number of tea packs: ";
    cin >> numberOfTeaPacks;

    cout << "Enter the price per pack: ";
    cin >> pricePerPack;

    totalPrice = numberOfTeaPacks * pricePerPack;

    finalPrice = totalPrice + (totalPrice * 0.10);

    cout << "Total price is " << finalPrice << endl;

    return 0;
}