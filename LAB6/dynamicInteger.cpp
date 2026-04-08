#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int dynamicInteger = 0;
    int* pPointer = new int;

    cout << "What number do you want? ";
    cin >> *pPointer;
    if(cin.fail()){
        cout << "Please enter an integer!!";
        cin.clear();
        cin.ignore(1000,'\n');
    }else{
    cout << "The value of dynamically allocated integer is: " << *pPointer<< endl;
    }
    string* pCount = new string();

    cout << "What string do you want? ";
    cin >> *pCount;

    cout << "The string dynamically allocated is: " << *pCount << endl;
    
    delete pPointer;
    delete pCount;
}