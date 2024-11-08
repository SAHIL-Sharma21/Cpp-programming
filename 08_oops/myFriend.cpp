//friend funtion in cpp
#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;

    public:
        Chai(string name, int serve): teaName(name), servings(serve){}
        
        //exposing function as friend
        friend bool compareServings(const Chai &chai1, const Chai &chai2);


        void display() const {
            cout << "teaName: " << teaName << endl;
            cout << "servings: " << servings << endl;
        }

};


bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}


int main() {

    Chai masalaChai("masala chai", 4);
    Chai gingerTea("ginger Chai", 4);

    masalaChai.display();
    gingerTea.display();

    if(compareServings(masalaChai, gingerTea)){
        cout << "Masala chai is having MORE servings" << endl;
    } else {
        cout << "Masala chai is having LESS servings" << endl;
    } 

    return 0;
}