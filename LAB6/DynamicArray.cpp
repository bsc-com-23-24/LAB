#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
    do {
        cout << "Enter number of rows (1 to 3): ";
        cin >> rows;

        cout << "Enter number of columns (1 to 3): ";
        cin >> cols;

        if (rows > 3 || cols > 3 || rows <= 0 || cols <= 0) {
            cout << "Invalid input! Dimensions must be between 1 and 3." << endl;
        }

    } while (rows > 3 || cols > 3 || rows <= 0 || cols <= 0);

    
    double** arr = new double*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }
    cout << endl;
    
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout << "Array contents:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}