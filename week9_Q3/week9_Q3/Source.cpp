#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	char k;
	cin >> a >> k >> b >> k >> c;
	if (a + b == c)
		cout << "+" << endl;
	else if (a - b == c)
		cout << "-" << endl;
	else if (a * b == c)
		cout << "*" << endl;
	else if (a / b == c)
		cout << "/" << endl;
	else if (a % b == c)
		cout << "%" << endl;
	else
		cout << "error" << endl;
	return 0;
}