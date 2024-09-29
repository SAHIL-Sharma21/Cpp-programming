#include<iostream>

using namespace std;


int main(){

    int teaCups;
    cout << "Enter the number of tea cups to serve: ";
    cin >> teaCups;

    //while loop
    while(teaCups > 0){
        teaCups--;
        cout << "Serving cup of tea\n" << teaCups << " remaining" << endl;
    }

    cout << "All tea cups are served" << endl;

    return 0;
}