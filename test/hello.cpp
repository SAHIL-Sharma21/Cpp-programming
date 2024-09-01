#include <iostream>

using namespace std;

//making custom namespace
namespace mymethods{
    void display(){
        //comment
    }
}

int main(){
    cout << "Hello, C++ from sahil sharma" << endl;

    //using my namespace
    mymethods::display();

    return 0;
}