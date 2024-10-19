#include<iostream>

using namespace std;

//Arrays: continoud memeory allocation

int main(){

    int chaiTemp[5] = {40, 35, 90, 25, 89};

    cout << "Chai Tempearture: ";
    for(int i = 0; i < 5; i++){
        cout << chaiTemp[i] << " degree C \n";
    }

    return 0;
}