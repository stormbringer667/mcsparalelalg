#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = log10(num) + 1;
    while (temp) sum += pow(temp % 10, digits), temp /= 10;
    return sum == num;
}
int main() {
    for (int i = 1; i < 100000; i++)
        if (isArmstrong(i)) cout << i << " ";
    cout << endl;
}
