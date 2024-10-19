#include<iostream>

using namespace std;

int main(){

    //2-D arrays

    int chaiSales[3][7] = {
        {50, 60, 44, 55, 23, 69, 45},
        {60, 20, 56, 11, 90, 56, 21},
        {78, 23, 54, 12, 66, 25, 90}
    };

    //printing the 2-D array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            cout << chaiSales[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}