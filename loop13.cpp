#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter an int: ";
    cin >> n;
    cout << "reversed: ";
    do cout << n % 10, n /= 10; while (n);
    cout << endl;
}
