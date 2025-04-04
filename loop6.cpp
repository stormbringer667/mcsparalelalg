#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "enter a character: ";
    cin >> c;
    cout << "output: " << (char)(islower(c) ? toupper(c) : tolower(c)) << endl;
}
