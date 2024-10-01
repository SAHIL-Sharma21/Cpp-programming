#include<iostream>
#include<string>

using namespace std;

//function defination
int checkTemp(int temperature){
    return temperature;
}

//function declaration
void serveChai(int cups);

void madeChai(){
    cout << "Boiling water, adding tea leaves, straining...." << endl;
}

//about paramter
void serveChai(string teaType = "Booba Tea"){
    cout << "Serving " << teaType << endl;
}


int main(){
    int temp = checkTemp(27);
    cout << temp << endl;

    serveChai(3);
    madeChai();//calling a function
    serveChai();
    return 0;
}

//later defining our function
void serveChai(int cups){
    cout << "Servng " << cups << " number is chai";
}

