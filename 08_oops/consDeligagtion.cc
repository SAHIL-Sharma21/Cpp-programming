//constructor delegation

#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        //deligation constructor
        Chai(string name): Chai(name, 1, {"Water", "tea leaves"}){}

        //main cons
        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;


            cout << "Main constructor called" << endl;
        }


        void displayDetails(){
            cout << "Tea name: " << teaName << endl;
            cout << "Servings: "<< servings << endl;
            cout << "Ingredients: ";
            for(string ingredient: ingredients){
                cout << ingredient << " ";
            } 
            cout << endl;
        }
};


int main(){
     
    Chai quickChai("Quick Chai");
    quickChai.displayDetails();    

    return 0;
}