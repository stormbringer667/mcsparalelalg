#include <iostream>
using namespace std;
int main() {
    int arr[] = { 4, 2, 9, 1, 7 }, n = 5, minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }
    cout << "before swap: "; for (int x : arr) cout << x << " ";
    swap(arr[minIdx], arr[maxIdx]);
    cout << "\nafter swap: "; for (int x : arr) cout << x << " ";
}
