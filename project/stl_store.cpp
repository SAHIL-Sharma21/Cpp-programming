#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>
 
using namespace std;


struct Product{
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};


int main(){

    vector<Product> products = {
        {101, "Macbook m4", "Electronics"},
        {102, "iPhone 16 pro", "Electronics"},
        {103, "Air purifyer", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;
    
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});


    //looping over products and aading in category set
    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 4},
        {105, 9}
    };


    multimap<string, Order> customerOrders;
    //looping for multimap
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    }


    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Sahil"},
        {"C003", "DK"},
        {"C004", "Tijmittal"},
        {"C005", "Gojo"}
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    } 
    
    return 0;
}
