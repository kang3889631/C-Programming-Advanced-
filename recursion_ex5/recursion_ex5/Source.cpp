#include <iostream>
using namespace std;

void move(int m, char x, char y, char z) {
	if (m == 1)
		cout << "from " << x << " to " << z << endl;
	else {
		move(m - 1, x, y, z);
		cout << "from " << x << " to " << z << endl;
		move(m - 1, y, x, z);
	}
}
int main() {
	int n = 0;
	cin >> n;
	move(n, 'A', 'B', 'C');
	return 0;
}