#include<iostream>
#include<string>

using namespace std;

int main(){

    string response;
    //learning about break keyword
    while (true){
        cout << "Do you want more tea (type 'stop' to exit)? ";
        getline(cin, response);

        cout << "here is your another cup of tea.\n";

        if(response == "stop"){
            //exit the loop
            break;
        }
    }

    cout << "No more tea will be serverd to you..";

    return 0;
}