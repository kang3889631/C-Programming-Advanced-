#include <iostream>
using namespace std;

void dtob(int n) {
	if (n / 2 != 0)
		dtob(n / 2);
	cout << n % 2;
}

int main() {
	int n = 0;
	cin >> n;
	dtob(n);
}
/*
Convert decimal to binary with recursion
*/