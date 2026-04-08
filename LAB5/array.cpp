#include <iostream>
#include <string>
using namespace std;

int main(){
    const int ARRAYSIZE = 8;
    string arra[ARRAYSIZE] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    for(int i = 0; i<ARRAYSIZE; i++){
        if(!arra[i].empty() && arra[i].front() == 'B'){
            cout << arra[i]<< endl;
        }
    }

    return 0;
}