#include <iostream>
using namespace std;

int main()
{
    int input;
    

    while(true){
        cout << "Please enter an integer between 5 and 10: ";
        cin >> input;

        if(cin.fail()){
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear(); // Clear the error state
            cin.ignore(10000, '\n'); // Ignore the rest of the line
        }

        else if(input < 5 || input > 10){
            cout << "Your input " << input << " is out of range. Please enter an integer between 5 and 10" << endl;
        }
        
        else{
            cout << "Your input is valid. Thank you!" << endl;
            break;
        }
    }


    return 0;
}