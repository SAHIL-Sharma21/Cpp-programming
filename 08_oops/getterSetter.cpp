//getter and setter in cpp
#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        //constructor
        Chai(){
            teaName = "unknown";
            servings = 1;
            ingredients = {"Water", "Tea leaves"};
        }

        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }


        //getter - get the values
        string getTeaName(){
            return teaName;
        }

        //setter - set the values in the variable
        void setTeaName(string name){
            teaName = name;
        }


        //getting for servigs
        int getServings(){
            return servings;
        }

        //setter for servings
        void setServings(int serve){
            servings = serve;
        }


        //getter for ingredients
        vector<string> getIngredients(){
            return ingredients;
        }

        //setter for ingredients
        void setIngredients(vector<string> ingre){
            ingredients = ingre;
        }


        //method for display
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
    Chai chai;

    chai.setTeaName("ginger tea");

    string tea = chai.getTeaName();
    // cout << tea;

    chai.setServings(2);
    int quantity = chai.getServings();
    // cout << quantity;

    chai.setIngredients({"Booba", "Water", "Tea leaves"});
    vector<string> items = chai.getIngredients();
    for(string item: items){
        cout << item << " ";
    }

    return 0;
}