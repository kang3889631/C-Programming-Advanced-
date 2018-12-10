#include <iostream>
using namespace std;

int done[10000][2] = {};

bool check(int x, int y) {
	
	return true;
}


int main() {
	int n, m = 0;
	char arr[101][101] = { 0 };
	cin >> n >> m;
	cin.get();
	cin.get();
	for (int i = 0; i < n; i++) {
		cin.getline(arr[i], m);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}