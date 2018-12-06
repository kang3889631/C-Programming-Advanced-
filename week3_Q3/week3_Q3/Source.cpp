#include <iostream>
using namespace std;
char man;

int match(char str[], int s) {
	int n;
	if (str[s] != man)
		return s;
	else {
		n = match(str, s + 1);
		cout << s << " " << n << endl;
		return match(str, n + 1);
	}
}

int main() {
	char str[101] = { 0 };
	cin >> str;
	man = str[0];
	int n = match(str, 1);
	cout << "0 " << n << endl;
	return 0;
}