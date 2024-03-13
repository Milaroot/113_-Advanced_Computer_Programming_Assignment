#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string weight;
    string price;
public:
    Product(string x, string y) : weight(x), price(y) {}

    void print(string x) {
        if (x == "price") {
            cout << price;
        } else {
            cout << weight;
        }
    }
};

class Vegetable : public Product {
public:
    Vegetable(string x, string y) : Product(x, y) {}
};

class Meat : public Product {
public:
    Meat(string x, string y) : Product(x, y) {}
};

class Fish : public Product {
public:
    Fish(string x, string y) : Product(x, y) {}
};

int main() {
    Fish fish1("50", "100");
    Fish fish2("110", "340");
    Vegetable vegetable1("70", "110");
    Vegetable vegetable2("14", "110");
    Meat meat1("100", "150");
    Meat meat2("200", "220");

    string merchandise;
    string information;
    cout << "Please enter the product:" << "\n";
    cin >> merchandise;
    cout << "Enter the information (weight or price):" << "\n";
    cin >> information;
    
    if (merchandise == "fish1") {
        fish1.print(information);
    } else if (merchandise == "fish2") {
        fish2.print(information);
    } else if (merchandise == "vegetable1") {
        vegetable1.print(information);
    } else if (merchandise == "vegetable2") {
        vegetable2.print(information);
    } else if (merchandise == "meat1") {
        meat1.print(information);
    } else if (merchandise == "meat2") {
        meat2.print(information);
    } else {
        cout << "error";
    }

    return 0;
}
