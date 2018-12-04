#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int year = 0, month = 0, day = 0;
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	char trash = 0;
	bool leapyear = 0;
	while (cin >> year >> trash >> month >> trash >> day) {
		day++;
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			a[2] = 29;
		}
		if (day > a[month]) {
			day %= a[month];
			month++;
			if (month == 13) {
				year++;
				month %= 12;
			}
		}
		cout << year << "-" << setfill('0') << setw(2) << month << "-" << setfill('0') << setw(2) << day << endl;

	}

	return 0;
}