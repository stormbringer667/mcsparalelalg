#include <iostream>
using namespace std;
int main() {
    float num;
    cout << "enter decimal number: ";
    cin >> num;
    cout << "binary: 0.";
    while (num > 0.005) {
        num *= 2;
        cout << (int)num;
        num -= (int)num;
    }
    cout << endl;
}
