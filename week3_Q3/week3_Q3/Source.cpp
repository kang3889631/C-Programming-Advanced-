#include <iostream>
using namespace std;

int rev(char str[], int l) {
	int n = 0;
	if (str[l] != str[0])
		return l;
	else {
		n = rev(str, l + 1);
		cout << l << " " << n << endl;
		return rev(str, n+1);
	}
}

int main() {
	char str[101] = { 0 };
	cin >> str;
	rev(str, 0);
}