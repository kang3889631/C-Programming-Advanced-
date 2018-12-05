#include <iostream>
using namespace std;

int main() {
	int n = 0, A = 0;
	double id = 0, c = 0, d = 0;
	double	a[100][2];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> id >> c >> d;
		a[i][0] = id;
		a[i][1] = d / c;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (a[j][1] > a[j+1][1]) {
				double tmp = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = tmp;
				double id = a[j][0];
				a[j][0] = a[j + 1][0];
				a[j + 1][0] = id;
			}
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		cout << a[i][0] << " " << a[i][1] << endl;
	}
	*/
	double max = 0;
	for (int i = 0; i < n-1; i++) {
		if (max < a[i + 1][1] - a[i][1]) {
			max = a[i + 1][1] - a[i][1];
		}
	}

	for (int i = 0; i < n - 1; i++) {
		if (max == a[i + 1][1] - a[i][1]) {
			A = i + 1;
			break;
		}
	}

	cout << n-A << endl;
	for (int i = A; i < n; i++) {
		cout << a[i][0] << endl;
	}
	cout << A << endl;

	for (int i = 0; i < A; i++) {
		cout << a[i][0] << endl;
	}

	return 0;
}

