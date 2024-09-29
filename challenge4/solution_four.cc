#include<iostream>
#include<string>

using namespace std;

int main(){

    string teaTypes[5] = {"Oolong Tea", "Booba Tea", "Herbal Tea", "No Tea", "Ice Tea"};

    for(int i = 0; i < 5; i++){
        if(teaTypes[i] == "Herbal Tea"){
            cout << "Skipping the herbal tea" << endl;
            continue;
        }

        if (teaTypes[i] == "No Tea"){
            cout << "Breaking the loop." << endl;
            break;
        }

        cout << "Serving the tea " << teaTypes[i] << endl;
    }

    return 0;
}