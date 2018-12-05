#include <iostream>
using namespace std;

int main() {
	int n = 0;
	char data[100][100] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> data[i][j];
		}
	}

	return 0;
}