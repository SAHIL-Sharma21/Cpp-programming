// employee management application
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;


struct Employee{
    int id;
    string name;
    double salary;
};

// & is reference no the memoryb address
void displayEmployee(const Employee& emp){
    cout << "ID: " << emp.id <<  " ,  Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main(){

    vector<Employee> employess = {
        {101, "Sahil", 100000},
        {102, "Tijmittal", 80000},
        {103, "DK", 790000},
        {104, "Priyank", 90000},
        {105, "Satvik", 10000},
    };

    //sorting
    // [](){} -> lamba function in cpp
    sort(employess.begin(), employess.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    //print from highest to lowest
    cout << "Employess sorted by salary -> Highest to lowest \n";

    for_each(employess.begin(), employess.end(), displayEmployee);

    vector<Employee> highEarners;
    copy_if(employess.begin(), employess.end(), back_inserter(highEarners), [](const Employee& e){
        return e.salary > 50000;
    });
    cout << "Employess who are high earners \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employess.begin(), employess.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });


    //avergae salary
    double averageSalary = totalSalary / employess.size();

    //max element
    auto highestPaid = max_element(employess.begin(), employess.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

    

    return 0;
}