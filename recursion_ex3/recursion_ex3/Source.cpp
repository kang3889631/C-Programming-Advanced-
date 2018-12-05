#include <iostream>
using namespace std;

int f(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	else
		return(f(n - 1) + f(n - 2));
}
int main() {
	int n = 0;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}

/*
Fibonacci Sequence:
*/