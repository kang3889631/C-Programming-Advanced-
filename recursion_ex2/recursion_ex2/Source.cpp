#include <iostream>
using namespace std;

int q(int n) {
	if (n == 0)
		return 1;
	else
		return(n + q(n - 1));
}
int main() {
	int n = 0; 
	cin >> n;
	cout << q(n) << endl;
	return 0;
}
/*
Question: a 2-demension round has been cut n times, to calculate the maximum block could be.
n=0 max(0)=1
n=1 max(1)=2
n=2 max(2)=max(2)+2
n=3 max(3)=max(3)+3
.
.
n=n max(n)=max(n-1)+n
*/
