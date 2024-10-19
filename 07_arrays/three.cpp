#include<iostream>

using namespace std;


int totalChaiServed(int chai[], int size){
    int total = 0;

    for(int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;
}


int main(){
    //passing array as an argumnet

    //using function
    int chaiServed[7] = {50, 27, 79, 55, 23, 47};

    int total =  totalChaiServed(chaiServed, 7);

    cout << total<< endl;

    return 0;
}