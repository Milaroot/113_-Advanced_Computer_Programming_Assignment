#include <iostream>
using namespace std;

class myClass{
    public:
    int myNum;
};

int main(){
    myClass myObj;
    myObj.myNum = 15;
    cout << myObj.myNum;
    return 0;
}