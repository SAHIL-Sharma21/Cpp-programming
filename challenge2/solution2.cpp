#include<iostream>

using namespace std;

int main(){

    int numberOfTeaBag;

    cout << "Enter the number of tea bag: ";
    cin >> numberOfTeaBag;

    if (numberOfTeaBag < 20) {
        numberOfTeaBag += 10;
    }

    cout << "Total bag of tea: " << numberOfTeaBag << endl;

    return 0;
}