#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    if(rows <= 0 || rows > 10) {
        cout << "Number of rows must be between 1 and 10\n";
        return 1;
    }
    
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    if(cols <= 0 || cols > 10) {
        cout << "Number of columns must be between 1 and 10\n";
        return 1;
    }
    
    double** arr = new double*[rows];
    for(int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    
    cout << "The elements of the array are:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}


