#include <iostream>
using namespace std;

void move(int n) {
	if (n == 1)
		cout << "End" << endl;
	else {
		if (n % 2 == 1){
			cout << n << "*3+1=" << 3 * n + 1 << endl;
			move(3*n+1);
		}
		else {
			cout << n << "/2=" << n/2 << endl;
			move(n/2);
		}
	}
}
int main() {
	int n = 0;
	cin >> n;
	move(n);
	return 0;
}