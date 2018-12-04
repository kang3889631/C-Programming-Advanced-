#include <iostream>
using namespace std;

int main () {
	for (int a = 1; a <= 4; a++) {
		for (int b = 1; b <= 4; b++) {
			for (int c = 1; c <= 4; c++) {
				for (int d = 1; d <= 4; d++) {
					if ((a != b&&a != c&&a != d&&b != c&&b != d&&c != d) &&
						((a == 3) + (b == 1) + (c == 2) + (d == 4) == 1)
						&& ((a == 2) + (b == 4) + (c == 3) + (d == 1) == 1)
						&& ((b == 3) + (d == 4) == 1)
						&& ((a == 1) + (b == 3) + (c == 4) + (d == 2) == 1)) {
						cout << a << endl;
						cout << b << endl;
						cout << c << endl;
						cout << d << endl;
					}
				}
			}
		}
	}
	
	return 0;
}