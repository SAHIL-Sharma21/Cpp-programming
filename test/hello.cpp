#include <iostream>

using namespace std;

//making custom namespace
// namespace mymethods{
//     void display(){
//         //comment
//     }
// }

string myName(){
    return "sahil is awesome";
}

int main(){
    cout << "Hello, C++ from sahil sharma" << endl;


    // std::cout<< "using namespace std;" << std::endl;
    //using my namespace
    // mymethods::display();
    // string username = myName();
    cout << myName() << endl;
    return 0;
}