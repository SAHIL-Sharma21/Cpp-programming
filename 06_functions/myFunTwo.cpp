#include<iostream>

using namespace std;

//learn about call by value
void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured Cups "<< cups << endl;
}


int main(){

    //pass by value and pass by reference
    int chaiCups = 2;
    pourChai(chaiCups);
    cout << "Total cups are: " << chaiCups << endl;

    return 0;
}