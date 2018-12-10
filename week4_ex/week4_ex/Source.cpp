#include<iostream>
#include <cstring>
using namespace std;


int main() {
	char str[100];
	while (cin.getline(str, 100)) {
		cout << strlen(str) << endl;
	}
	
}