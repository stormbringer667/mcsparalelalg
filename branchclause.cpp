#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getDayOfYear(int year, int month, int day) {
    int daysInMonths[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) {
        daysInMonths[1] = 29;
    }
    int dayOfYear = day;
    switch (month - 1) {
    case 11: dayOfYear += daysInMonths[10];
    case 10: dayOfYear += daysInMonths[9];
    case 9:  dayOfYear += daysInMonths[8];
    case 8:  dayOfYear += daysInMonths[7];
    case 7:  dayOfYear += daysInMonths[6];
    case 6:  dayOfYear += daysInMonths[5];
    case 5:  dayOfYear += daysInMonths[4];
    case 4:  dayOfYear += daysInMonths[3];
    case 3:  dayOfYear += daysInMonths[2];
    case 2:  dayOfYear += daysInMonths[1];
    case 1:  dayOfYear += daysInMonths[0];
    }
    return dayOfYear;
}
int main() {
    int year, month, day;
    cout << "enter year, month, day: ";
    cin >> year >> month >> day;
    cout << "The given date is the " << getDayOfYear(year, month, day)
        << " the day of the year " << year << "." << endl;
    return 0;
}
