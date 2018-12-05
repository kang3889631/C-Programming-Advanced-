#include <iostream>
using namespace std;
int switchline(int, int);
int main() {
	int n = 0, A = 0, B = 0;
	int data[100][3],a[100][3],b[100][3];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i][0] >> data[i][1] >> data[i][2];
	}
	for (int i = 0; i < n; i++) {
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
	/*
	for (int i = 0; i < A; i++) {
		for (int j = i + 1; j < A; j++) {
			if (a[i][2] < a[j][2]) {
				
			}
		}
	}
	*/
	int c[3][2] = { 1,1,2,2,3,3 };
	switchline(c[0], c[1]);

	for (int i = 0; i < A; i++) {
		cout << a[i][0] << endl;
	}

	return 0;
}
int switchline(int a[], int b[]) {
	return b, a;
}