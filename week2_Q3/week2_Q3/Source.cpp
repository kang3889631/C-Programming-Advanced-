#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int id = 0, n = 0, count = 0;
	double amountA = 0, amountB = 0, amountC = 0, amount1 = 0, amount2 = 0, amount3 = 0;
	while (count<3 && cin >> id >> n) {
		for (int i = 0; i < n; i++) {
			char type = 0;
			double amount = 0;
			cin >> type >> amount;
			if (id == 1) {
				amount1 += amount;
			}
			if (id == 2) {
				amount2 += amount;
			}
			if (id == 3) {
				amount3 += amount;
			}
			if (type == 'A') {
				amountA += amount;
			}
			if (type == 'B') {
				amountB += amount;
			}
			if (type == 'C') {
				amountC += amount;
			}
		}
		count++;
	}
	cout << "1 " << fixed << setprecision(2) << amount1 << endl;
	cout << "2 " << fixed << setprecision(2) << amount2 << endl;
	cout << "3 " << fixed << setprecision(2) << amount3 << endl;
	cout << "A " << fixed << setprecision(2) << amountA << endl;
	cout << "B " << fixed << setprecision(2) << amountB << endl;
	cout << "C " << fixed << setprecision(2) << amountC << endl;

	return 0;
}