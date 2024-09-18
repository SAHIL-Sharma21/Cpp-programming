#include<iostream>


using namespace std;


int main(){
    //solution 2
    int teaPrice;
    cout << "Enter your desired tea price:\n";

    cin >> teaPrice;

    double modifiedPrice =  teaPrice + ((double) teaPrice * 0.1);

    int finalPrice = (int) (modifiedPrice + 0.5);

    cout << "The Price of the tea after the 10% increrment is: " << finalPrice << endl;

    return 0;
}