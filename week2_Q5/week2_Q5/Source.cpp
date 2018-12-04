#include <iostream>
using namespace std;

int main() {
	int n = 0, A = 0, B = 0;
	int data[100][3],a[100][3],b[100][3];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i][0] >> data[i][1] >> data[i][2];
	}
	for (int i = 0; i < n; i++) {
		cout << "data[i][2]=" << data[i][2] << endl;
		cout << "data[i][1]=" << data[i][1] << endl;
		if (data[i][2] > data[i][1] * 100) {
			a[A][0] = data[i][0];
			a[A][0] = data[i][0];
			a[A][0] = data[i][0];
			A++;
		}
		else {
			b[B][0] = data[i][0];
			b[B][1] = data[i][1];
			b[B][2] = data[i][2];
			B++;
		}
	}

	for (int i = 0; i < A; i++) {
		for (int j = i + 1; j < A; j++) {
			if (a[i][2] < a[j][2]) {
				for (int k = 0; k < 3; k++) {
					int tmp = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = tmp;
				}
			}
		}
	}

	for (int i = 0; i < A; i++) {
		cout << a[i][2] << endl;
	}
	return 0;
}