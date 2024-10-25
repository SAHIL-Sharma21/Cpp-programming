#include<iostream>
#include<vector>

using namespace std;


class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;    

        //paramter constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients" << " ";
            for(string ingredient: ingredients){
                cout << ingredient << endl;
            }
            cout << endl;
        }
};

int main(){

    Chai lemonTea("Lemon Tea", 2, {"Water", "lemon", "Honey"});

    lemonTea.displayChaiDetails();
    return 0;
}