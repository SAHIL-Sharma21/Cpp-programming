//inheritence in cpp
#include<iostream>
#include<vector>
#include<string>

using namespace std;


//base class/ main class/ parent class
class Tea{
    protected: 
        string teaName;
        int servings;

    public:
        //construcor
        Tea(string name, int serve): teaName(name), servings(serve){
            cout << "Tea constructor called " << teaName << endl;
        }

        virtual void brew() const {
            cout << "Brewing " << teaName << " withgeneric method" << endl;
        }

        virtual void serve() const{
            cout << "Serving " << servings << " cup of tea with generic method" << endl;
        }

        //destructor
        virtual ~Tea(){
            cout << "Tea desctuctor called for " << teaName << endl;
        }
};

//inheritance
class GreenTea: public Tea {
    public:
        GreenTea(int serve): Tea("Green Tea", serve){
            cout << "Green Tea constructor called" << endl;
        }

        void brew()const override {
            cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
        }

        ~GreenTea(){
            cout << "Green Tea desctrutor called." << endl;
        }
};

//one more derived class
class MasalaTea: public Tea {
    public: 
        MasalaTea(int serve): Tea("Masala Tea", serve){
            cout << "Masala Tea constructor called " << endl;
        }

        void brew()const override final {
            cout << "Brewing " << teaName << " with spices and milk." << endl;
        }

        ~MasalaTea(){
            cout << "Masla tea desctrutor called." << endl;
        }

};

/* error in bwlow code as abive brew method is made by final keyword
 class SpicyMasalaTea: public MasalaTea{
     public:
         void brew() const override {
             cout << "Brewing " << teaName << " with spices and milk" << endl;
         }
    };
*/

int main(){
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}