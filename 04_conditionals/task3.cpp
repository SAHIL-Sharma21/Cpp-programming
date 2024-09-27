#include<iostream>


using namespace std;

int main(){

    int cups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cups: ";
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if (cups > 20) {
        discount = 0.20; //20% discount
    } else if(cups >= 10 && cups <= 20){
        discount = 0.10; //10% discount
    } else {
        discount = 0.0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is: " << totalPrice << endl; 

    return 0;
}