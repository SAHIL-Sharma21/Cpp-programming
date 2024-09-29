#include<iostream>
#include<string>

using namespace std;


int main(){

    string response;

    do {    
        cout << "Do you want more sugar (yes/enough)? ";
        getline(cin, response);

    } while(response != "enough");

    return 0;
}