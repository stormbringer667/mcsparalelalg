#include <iostream>
using namespace std;
void mergeSorted(int* a, int n, int* b, int m, int* res) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) res[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    while (i < n) res[k++] = a[i++];
    while (j < m) res[k++] = b[j++];
}
int main() {
    int a[] = { 1, 3, 5 }, b[] = { 2, 4, 6 }, c[6];
    mergeSorted(a, 3, b, 3, c);
    for (int x : c) cout << x << " ";
}
