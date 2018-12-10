#include <iostream>
using namespace std;

int main() {
	int m, k ,temp = 0;
	int num[5] = { 30000,3000,300,30,3 };
	bool a = false;
	bool w = false;
	bool q = false;
	bool b = false;
	bool s = false;
	bool g = false;

	cin >> m >> k;
	temp = m;
	if (temp % 19 == 0) {
		while (temp>0) {
			temp -= 19;
			if (temp / 10000 == 3)
				w = true;
			if ((temp % 10000) / 1000 == 3)
				q = true;
			if ((temp % 1000) / 100 == 3)
				b = true;
			if ((temp % 100) / 10 == 3)
				s = true;
			if ((temp % 10) == 3)
				g = true;
			if (w + q + b + s + g == k) {
				a = true;
				break;
			}
		}
	}
	if (a == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}