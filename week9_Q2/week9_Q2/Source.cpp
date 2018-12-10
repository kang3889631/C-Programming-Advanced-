#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[501] = { 0 };
	int c[26] = { 0 };
	int spare[26] = { 0 };
	cin.getline(str, 501);
	bool l = false;
	//convert lower to upper
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	//count all characters to c array
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90)
			c[str[i]-65]++;
	}
	//find out max and delete them/it
	int max = 0;
	for (int i = 0; i < 26; i++) {
		if (max < c[i])
			max = c[i];
	}
	for (int i = 0; i < 26; i++) {
		if (c[i]==max)
			c[i] = 0;
	}
	//find out second largest amount
	int max2 = 0;
	for (int i = 0; i < 26; i++) {
		if (max2 < c[i])
			max2 = c[i];
	}
	int loc = 0;
	for (int i = 0; i < 26; i++) {
		if (max2 == c[i])
			spare[loc++] = i+65;
	}

	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (l == false) {
			for (int j = 0; j < loc; j++) {
				if (str[i] == spare[j]) {
					count = spare[j];
					l = true;
					break;
				}
			}
		}
	}
	char a, b;
	a = count;
	b = count + 32;
	cout << a << "+" << b << ":" << max2 << endl;
	return 0;
}