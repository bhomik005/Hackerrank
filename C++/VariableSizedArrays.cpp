#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;


int main() {
    int n, q, num;
    int length;
    cin >> n >> q;
    // Dynamically allocate memory for 2D array
    // arr is a pointer to the pointer
    int **arr = new int*[n];
    for(int i = 0; i < n; ++i) {
        cin >> length;
        arr[i] = new int[length];
        for(int j = 0; j < length; j++) {
            cin >> num;
            arr[i][j] = num;
        }
    }
    int row, col;
    for(int i = 0; i < q; ++i) {
        cin >> row >> col;
        cout << arr[row][col] << "\n";
    }

    // Deallocate the memory
    for(int i = 0; i < n; ++i) {
        delete[] arr[i]; // Deleting each row
    }
    delete[] arr; // Deleting the array of row pointers
    return 0;
}