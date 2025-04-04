#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
bool hasDuplicateDigits(int n) {
    bool seen[10] = { false };
    while (n) {
        int digit = n % 10;
        if (seen[digit]) return true;
        seen[digit] = true;
        n /= 10;
    }
    return false;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
    cout << (hasDuplicateDigits(num) ? "Has duplicate digits" : "No duplicate digits") << endl;
    return 0;
}
