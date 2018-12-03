#include <iostream>
using namespace std;
int day = 0;
int getweek(int);
int getyear(int);
int getmonth(int);
int main() {
	char week[7][10] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	char month[12][10] = { "Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sep","Oct","Nov","Dec" };
	while (cin >> day) {
		int year = 2000;
		cout << week[getweek(day)] << endl;
		year = getyear(year);
		cout << year << " ";
		cout << month[getmonth(year)] << " ";
		cout << day << endl;
	}


	return 0;
}

int getweek(int a) {
	a = (a % 7 + 4) % 7;
	return a;
}
int getyear(int year) {
	while (day > 365) {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			if (day > 366) {
				day -= 366;
				year++;
			}
		}
		else {
			day -= 365;
			year++;
		}
	}
	return year;
}

int getmonth(int year) {
	int month = 0;
	int monthofnormalyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int monthofleapyear[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	bool leapyear = 0;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		leapyear = 1;
	}
	if (leapyear) {
		while(day > monthofleapyear[month]) {
			day -= monthofleapyear[month++];
		}
	}
	else {
		while (day > monthofnormalyear[month]) {
			day -= monthofnormalyear[month++];
		}
	}
	return month;
}