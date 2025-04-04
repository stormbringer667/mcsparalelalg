#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a = 0, b = 1, c;
    while (a <= 10000) {
        if (a % 5 == 0) cout << setw(5) << setfill('0') << a << " ";
        c = a + b, a = b, b = c;
    }
}
