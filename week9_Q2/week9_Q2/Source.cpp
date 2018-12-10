#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[501] = { 0 };
	int c[26] = { 0 };
	cin.getline(str, 501);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90)
			c[str[i] - 65]++;

		if (str[i] >= 97 && str[i] <= 122)
			c[str[i] - 97]++;
	}
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (max < c[i])
			max = c[i];
	}
	for (int i = 0; i < 26; i++) {
		if (max == c[i])
			c[i] = 0;
	}
	int max2 = 0;
	for (int i = 0; i < 26; i++) {
		if (max2 < c[i])
			max2 = c[i];
	}
	int loc = 26;
	for (int i = 0; i < 26; i++) {
		if (max2 == c[i]) {
			for (int j = 0; j < strlen(str); j++) {
				if (str[j] == (i + 65) || str[j] == (i + 97))
					if (j < loc)
						loc = j;
			}
		}
	}
	char a = 65 + loc;
	char b = 97 + loc;
	cout << a << "+" << b << ":" << max2 << endl;
	return 0;
}