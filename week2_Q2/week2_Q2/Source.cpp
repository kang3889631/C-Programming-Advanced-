#include <iostream>
using namespace std;

int main () {
	// x[][0] Û¶Ñôºþ
	// x[][1] ¶´Í¥ºþ
	// x[][2] Ì«ºþ
	// z[][3] ºéÔóºþ
	int a[4][4] = { 3,1,2,4,2,4,3,1,1,3,2,4,1,3,4,2 };
	int b[4][4] = { 3,1,2,4,2,4,3,1,2,3,1,4,1,3,4,2 };
	int counta = 0;
	int countb = 0;

	for (int i = 0; i < 4; i++) {
		int total = 0;
		for (int j = 0; j < 4; j++) {
			total += a[j][i];
		}
		if (total == 10) {
			counta = i;
		}
	}

	for (int i = 0; i < 4; i++) {
		int total = 0;
		for (int j = 0; j < 4; j++) {
			total += b[j][i];
		}
		if (total == 10) {
			countb = i;
		}
	}
	if (counta != 0) {
		for (int i = 0; i < 4; i++) {
			cout << a[i][counta] << endl;
		}
	}

	if (countb != 0) {
		for (int i = 0; i < 4; i++) {
			cout << b[i][countb] << endl;
		}
	}
	return 0;
}