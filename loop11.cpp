#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << string(2 * i + 1, 'A' + i) << endl;
}
