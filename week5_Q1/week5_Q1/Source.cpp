#include<iostream>
using namespace std;


int main() {
	int a[100][100] = {}, m = 0, n = 0, k = 0;
	cin >> k;
	while (k-- > 0) {
		cin >> m >> n;
		int result = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		if (m > 1 && n > 1) {
			for (int i = 0; i < m; i++) {
				result += a[i][0];
				result += a[i][n - 1];
			}
			for (int i = 1; i < n - 1; i++) {
				result += a[0][i];
				result += a[m - 1][i];
			}
			cout << result << endl;
		}
		else{
			int result = 0;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					result+= a[i][j];
				}
			}
			cout << result << endl;
		}
	}
}