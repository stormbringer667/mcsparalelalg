#include <iostream>
using namespace std;
void printMatrix(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) cout << arr[i * cols + j] << " ";
        cout << endl;
    }
}
int main() {
    int r = 3, c = 4, arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, transposed[12];
    cout << "orig matrix:\n"; printMatrix(arr, r, c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) transposed[j * r + i] = arr[i * c + j];
    cout << "transported matrix:\n"; printMatrix(transposed, c, r);
}
