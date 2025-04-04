#include <iostream>
using namespace std;
int main() {
    int y, m, d, days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    cout << "enter year, month, day: ";
    cin >> y >> m >> d;
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) days[1] = 29; 
    int dayOfYear = d;
    for (int i = 0; i < m - 1; i++) dayOfYear += days[i];
    cout << "day of the year: " << dayOfYear << endl;
}
