#include <iostream>
using namespace std;

int main(){
    int firstvalue;
    int secondvalue;
    int* pPointer = nullptr;

    pPointer = &firstvalue;
    *pPointer = 10;

    pPointer = &secondvalue;
    *pPointer = 20;

    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl; 
}