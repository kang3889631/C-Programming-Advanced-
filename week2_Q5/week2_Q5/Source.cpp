#include <iostream>
using namespace std;

int main() {
	int n = 0, A = 0, B = 0, ave = 0;
	int data[100][4],a[100][2],b[100][2];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i][0] >> data[i][1] >> data[i][2];
		data[i][3] = data[i][2] / data[i][1];
	}
	for (int i = 0; i < n; i++) {
		ave += data[i][3];
	}
	ave /= n;
	for (int i = 0; i < n; i++) {
		if (data[i][3] > ave) {
			a[A][0] = data[i][0];
			a[A][1] = data[i][2];
			A++;
		}
		else {
			b[B][0] = data[i][0];
			b[B][1] = data[i][2];
			B++;
		}
	}

	cout << A << endl;
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < A-1; j++) {
			if (a[j][1] > a[j+1][1]) {
				int tmp = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = tmp;
				int id = a[j][0];
				a[j][0] = a[j + 1][0];
				a[j + 1][0] = id;
			}
		}
	}
	for (int i = 0; i < A; i++) {
		cout << a[i][0] << endl;
	}
	cout << B << endl;
	for (int i = 0; i < B; i++) {
		for (int j = 0; j < B - 1; j++) {
			if (b[j][1] > b[j + 1][1]) {
				int tmp = b[j][1];
				b[j][1] = b[j + 1][1];
				b[j + 1][1] = tmp;
				int id = b[j][0];
				b[j][0] = b[j + 1][0];
				b[j + 1][0] = id;
			}
		}
	}
	for (int i = 0; i < B; i++) {
		cout << b[i][0] << endl;
	}
	return 0;
}

