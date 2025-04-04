#include <iostream>
using namespace std;
int main() {
    int A[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    int B[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int C[3][3] = { 0 };
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 4; k++)
                C[i][j] += A[i][k] * B[k][j];
    cout << "resulting matrix:\n";
    for (auto& row : C) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
}
