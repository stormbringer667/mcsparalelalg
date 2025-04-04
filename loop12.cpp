#include <iostream>
using namespace std;
int main() {
    int n;
    char ch = 'A';
    cout << "enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++, cout << endl)
        for (int j = 0; j < 2 * i - 1; j++) cout << ch++;
}
