#include<iostream>
#include<vector>


using namespace std;


//making class
class Chai{
    public:
        //data members (attributes)
        string teaName;  //name of the tes
        int servings;   //number of servings
        vector<string> ingredients; //list of ingridents of the tea

        //functionality -> Member function
        void dispayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Tea servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string ingredient: ingredients){
                cout << ingredient << " ";
            } 
            cout << endl;
        }
    private:
        string myName;
};


int main(){

    //making object
    Chai chaiOne;

    chaiOne.teaName = "Booba tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water", "coffee", "booba", "tea"};
    chaiOne.dispayChaiDetails();


    Chai chaiTwo;

    chaiTwo.teaName = "Masala chai";
    chaiTwo.servings = 2;
    chaiTwo.ingredients = {"water", "ginger", "tea", "masala"};

    chaiTwo.dispayChaiDetails();

    return 0;
}