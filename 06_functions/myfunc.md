## Funtions in C++

- Functions are a block of code which only runs when it is called.

```cpp
    return_type function_name(parameters){
        //function body
    }
```
- function has retun_type is int, void, string etc
- parameters are optional

#### function defination
```cpp
    int checkTemp(int temp){
        return temp;
    }
```

#### Function Declaration
```cpp
    void serveChai(int cups);
```
- later we can write the defination of the function.

### function overloading
- same function name but different parameters
```cpp
    void serveChai(int cups){}
    void serveChai(string teaTypes){}

    // funtion with default parameter
    void serveChai(string teaTypes = "Oolong tea"){}
```

## Function with pass by value and pass by reference
- call by value
```cpp
    void updateValue(int number){
        nummber = number + 10;
        cout << "Value updated by 10: " << number << endl;
    }

    int main(){
        int userNum = 4;
        updateValue(userNum);
        cout << "The user number is: " << userNum << endl;
    }
```

- call by reference
```cpp
    void updateValue(int &number){
        nummber = number + 10;
        cout << "Value updated by 10: " << number << endl;
    }

    int main(){
        int userNum = 4;
        updateValue(userNum);
        cout << "The user number is: " << userNum << endl;
    }
```     

### Lamda functions
- A lambda function is an anonymous function that can be created without a name. Lambda functions are used to create small, one-time use functions.

```cpp
    auto func = [](int a, int b){
        return a + b;
    };

    func(1, 2); 
```