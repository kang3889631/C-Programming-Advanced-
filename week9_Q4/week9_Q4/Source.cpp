#include <iostream>
using namespace std;

int main() {
	int n, c = 0;
	int p[110][2] = {};
	int q[110][2] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i][0] >> p[i][1];
	}
	for (int i = 0; i < n; i++) {
		int x = p[i][0];
		int y = p[i][1];
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (x <= p[j][0] && y <= p[j][1])
				count++;
		}
		if (count == 1) {
			q[c][0] = x;
			q[c][1] = y;
			c++;
		}
	}

	for (int i = 0; i < c; i++) {
		for (int j = i+1; j < c; j++) {
			if (q[i][0] > q[j][0]) {
				int temp = q[i][0];
				q[i][0] = q[j][0];
				q[j][0] = temp;
				temp = q[i][1];
				q[i][1] = q[j][1];
				q[j][1] = temp;
			}
		}
	}
	for (int i = 0; i < c; i++) {
		if (i == 0)
			cout << "(" << q[i][0] << "," << q[i][1] << ")";
		else {
			cout << "," << "(" << q[i][0] << "," << q[i][1] << ")";
		}
	
	}
	return 0;
}