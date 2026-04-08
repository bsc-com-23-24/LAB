#include <iostream>
using namespace std;

int main(){
    int* pPointer = nullptr;
    int integervar = 5;
    pPointer = &integervar;
    cout << "intergarvar: " <<integervar << endl;
    cout<< "Address of integervar: " << &integervar << endl;
    cout << "pPointer: " << pPointer << endl;
    cout << "Address of pPointer: " << &pPointer << endl;
    return 0;
    
}