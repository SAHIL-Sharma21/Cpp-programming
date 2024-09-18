#include<iostream>


using namespace std;


int main(){

    //type casting -> one datatype to another data type
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;

    // int shortTeaPrice = (short) teaPrice; //type mismatch

    cout << teaPrice << endl;//49.99
    cout << roundedTeaPrice << endl;//49
    // cout << shortTeaPrice << endl;

    int teaQuantity = 2;
    double totalPrice = teaPrice * teaQuantity; //precision will be lost when we use int
    cout << totalPrice << endl;



    return 0;
}