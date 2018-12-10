#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n = 0;
	char str[4001] = { 0 };
	cin >> n;
	cin.get();
	cin.getline(str, 4001);
	str[strlen(str)] = '\n';

	int start = 0;
	int end = 80;
	while (end<strlen(str)) {
		while (str[end] != ' ') {
			end--;
		}
		for (int i = start; i < end; i++) {
			cout << str[i];
		}
		cout << endl;
		start = end + 1;
		end = start + 80;
	}
	while (str[start] != '\n') {
		cout << str[start];
		start++;
	}
	return 0;
}