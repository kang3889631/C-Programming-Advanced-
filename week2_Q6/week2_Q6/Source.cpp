#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0, count = 0;
	char data[100][100] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> data[i][j];
		}
	}
	cin >> m;
	for (int k = 0; k < m-1; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (data[i][j] == '@'&&data[i + 1][j] == '.') {
					data[i + 1][j] = 'c';
				}
				if (data[i][j] == '@'&&data[i - 1][j] == '.') {
					data[i - 1][j] = 'c';
				}
				if (data[i][j] == '@'&&data[i][j + 1] == '.') {
					data[i][j + 1] = 'c';
				}
				if (data[i][j] == '@'&&data[i][j - 1] == '.') {
					data[i][j - 1] = 'c';
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (data[i][j] == 'c')
					data[i][j] = '@';
			}
		}
	}

	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (data[i][j] == '@')
				count++;
		}
	}
	cout << count << endl;
	
	return 0;
}