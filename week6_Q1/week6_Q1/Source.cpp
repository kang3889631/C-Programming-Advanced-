#include <iostream>
#include <iomanip>
using namespace std;
bool b = false;
int main() {
	int m = 0;
	float th = 0.0;
	float a[50][2] = { 0 };
	cin >> m >> th;
	for (int i = 0; i < m; i++) {
		cin >> a[i][0] >> a[i][1];
	}
	for (int i = 0; i < m-1; i++) {
		for (int j = i; j < m; j++) {
			if (a[i][1] < a[j][1]) {
				float temp = a[i][1];
				a[i][1] = a[j][1];
				a[j][1] = temp;
				temp = a[i][0];
				a[i][0] = a[j][0];
				a[j][0] = temp;

			}
		}
	}
	for (int i = 0; i < m; i++) {
		if (a[i][1] > th) {
			b = true;
			int tmp = a[i][0];
			cout << setfill('0') << setw(3) << tmp << " ";
			cout << fixed << setprecision(1) << a[i][1] << endl;
		}
	}
	if (b == false) {
		cout << "None." << endl;
	}
	return 0;
}