#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        cout << string(i, 'A') << " " << string(i, 'B') << endl;
}
