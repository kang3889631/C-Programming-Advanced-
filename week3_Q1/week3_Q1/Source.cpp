#include <iostream>
using namespace std;

char a[500] = { 0 };
int i = 0;

int rev() {
	char c = a[i];
	i++;
	if (c == ' ')
		return 1;
	else if (c != ' '&&c != '\0') {
		rev();
		cout << c;
	}
	return 1;
}

int main() {
	cin.getline(a, 500);
	while (a[i] != '\0') {
		if (rev() == 1)
			cout << " ";
	}
	cout << endl;
}