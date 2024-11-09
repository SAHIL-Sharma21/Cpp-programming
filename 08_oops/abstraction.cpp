//abstraction in cpp
#include<iostream>
#include<string>

using namespace std;


class Tea{
    public:
        virtual void prepareIngredients() = 0; //pure virtual function
        virtual void brew() = 0;
        virtual void serve() = 0;


        void makeTea(){
            prepareIngredients();
            brew();
            serve();            
        }
};


//derived class
class GreeTea: public Tea {
    public:
        //redeclare the above functions
        void prepareIngredients() override {
            cout << "Green Leaves and water is ready" << endl;
        }

        void brew() override {
            cout << "Green Tea brewed" << endl;
        }

        void serve() override {
            cout << "Green Tea served" << endl;
        }
};

class BoobaTea: public Tea {
    public:
        void prepareIngredients() override {
            cout << "Booba, leaves, water and ice" << endl;
        }

        void brew()override {
            cout << "Booba tea brewed" << endl;
        }

        void serve()override {
            cout << "Booba Tea served" << endl;
        }
};

int main(){

    GreeTea greenTea;
    BoobaTea boobaTea;

    greenTea.makeTea();
    boobaTea.makeTea();


    return 0;
}