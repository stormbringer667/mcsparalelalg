#include <iostream>
using namespace std;
bool sum25(int num) {
    int sum = 0;
    while (num) sum += num % 10, num /= 10;
    return sum == 25;
}
int main() {
    for (int i = 10000000, count = 0; i < 100000000; i++) {
        if (sum25(i)) cout << i << (++count % 10 ? " " : "\n");
    }
    cout << endl;
}
