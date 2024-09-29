#include<iostream>
#include<string>

using namespace std;


int main(){

    cout << "Tea Brewing schedule." << endl;

    string meals[3] = {"Breakfast", "lunch", "dinner"};

    for(int i = 1; i <= 7; i++){
        cout << "\nBreaing for day: " << i << ":" << endl;

        for(int j = 0 ; j < 3; j++){
            cout << "Brewing 2 cups for " << meals[j] << endl; 
        }
    }
    
    return 0;
}