#include <iostream>
using namespace std;

int main() {
	int m, k, temp = 0;
	bool a = false;
	cin >> m >> k;
	while (temp <= m) {
		int count = 0;
		if (m / 10000 == 3)
			count++;
		if ((m % 10000) / 1000 == 3)
			count++;
		if ((m % 1000) / 100 == 3)
			count++;
		if ((m % 100) / 10 == 3)
			count++;
		if ((m % 10) == 3)
			count++;
		if (count == k)
			a = true;
		temp += 19;
	}

	if (a == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}