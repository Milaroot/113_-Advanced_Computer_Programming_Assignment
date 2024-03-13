#include <iostream>
using namespace std;

class myClass{
    public:
    void myMethod(){
        cout << "Hello World!";
    }
};

int main(){
    myClass myObj;
    myObj.myMethod();
    return 0;
}