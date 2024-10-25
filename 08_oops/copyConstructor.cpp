#include<iostream>
#include<vector>

using namespace std;


class Chai{
    public:
        string* teaName;
        int servings;
        vector<string> ingredients;    

        //paramter constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = new string(name);
            servings = serve;
            ingredients = ingre;
        }

        //copy constructor
        Chai(const Chai& other){ //deep copy
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
            cout << "Copy constructor called" << endl;
        }

        //destructor for memory free krne ke liye
        ~Chai(){
            delete teaName;
            cout << "Destructor called" << endl;
        }
        
        void displayChaiDetails(){
            cout << "Tea Name: " << *teaName << endl;
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

    // lemonTea.displayChaiDetails();

    //copy the object
    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "modified lemon tea";
    lemonTea.displayChaiDetails();

    cout << "Copied chai: " << endl;
    copiedChai.displayChaiDetails();

    return 0;
}