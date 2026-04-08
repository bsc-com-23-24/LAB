#include <iostream>
using namespace std;

int main(){
    int numbersOfElements = 0;
    int* dynamicArrray = nullptr;

    cout << "How many numbers would you like to type? ";
    cin >> numbersOfElements;

    dynamicArrray = new int[numbersOfElements];

    if(dynamicArrray == nullptr){
        cout << "Error: memory could not be allocated";
    }
    else{
        for(int i = 0; i < numbersOfElements; i++){
            cout << "Enter number: ";
            cin >> dynamicArrray[i];
        }
        cout << "you have entered: ";

        for(int j = 0; j < numbersOfElements; j++){
            cout << dynamicArrray[j] << ", ";

        }
        delete[] dynamicArrray;
    }
}