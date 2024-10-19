#include<iostream>

using namespace std;

//funtion retun array
int* prepareChaiorder(int cups){
    int* orders = new int[cups]; //dynamic memory

    for(int i = 0; i < cups; i++){
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main(){

    int cups = 5;
    int* order = prepareChaiorder(cups);

    for(int i = 0; i < cups; i++){
        cout << "Cups " << i + 1 << " has " << order[i] << " ml" << endl;
    }

    //cleanup code for memory allocation in heap
    delete[] order;

    return 0;
}