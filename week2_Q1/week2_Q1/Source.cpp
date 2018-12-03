#include <iostream>
using namespace std;

int main() {
	int n = 0, x[100] = {0};
	while (cin >> n) {
		bool a = 0;
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}
		for (int i = 0; i < n; i++) {
			if (i == x[i]) {
				a = 1;
				cout << i << endl;
				break;
			}
			continue;
		}
		if (a == 0) {
			cout << "N" << endl;
		}
	}
	return 0;
}