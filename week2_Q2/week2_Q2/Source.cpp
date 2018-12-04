#include <iostream>
using namespace std;

int main () {
	// x[][0] Û¶Ñôºþ
	// x[][1] ¶´Í¥ºþ
	// x[][2] Ì«ºþ
	// z[][3] ºéÔóºþ
	int a[4] = { 3,1,2,4 };
	int b[4] = { 2,4,3,1 };
	int c[4] = { 0,3,0,4 };
	int d[4] = { 1,3,4,2 };
	int i = 0;
	for (i = 0; i < 4; i++) {
		if (a[i] != b[i] && a[i] != c[i] && a[i] != d[i] && b[i] != c[i] && b[i] != d[i] && c[i] != d[i] && c[i] != 3 && c[i] != 4)
			break;
	}
	cout << a[i] << endl;
	cout << b[i] << endl;
	cout << 10-a[i]-b[i]-d[i] << endl;
	cout << d[i] << endl;
	return 0;
}