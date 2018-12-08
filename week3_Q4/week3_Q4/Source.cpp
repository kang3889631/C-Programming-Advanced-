#include<iostream>
#include<cstring>
using namespace std;
bool a = false;
bool b = false;

int check(char str[],int s) {
	while (str[s] != '(' && str[s] != ')'&& s<strlen(str)) {
		s++;
	}
	return s;
}
int firstleft(char str[],int s) {
	while (str[s] != '(') {
		s++;
	}
	return s;
}

int last(char str[]) {
	int s = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(' || str[i] == ')')
			s = i;
	}
	return s;
}

int rev(char str[], int m) {
	int s = check(str, m);
	//cout << "s= " << s << endl;
	if (str[s] == '(') {
		int n;
		(b, n) = rev(str, s + 1);
		if (b == false) {
			return (b = false, n);
		}
		else {
			if (str[n] == ')') {
				str[s] = '0';
				str[n] = '1';
				bool a = true;
				return rev(str, n + 1);
			}
			else {
				return (b = false, n);
			}
		}
	}else {
		return (b = true, s);
	}
}

int main() {
	char str[110] = {};
	while (cin.getline(str, 100))
	{

		if (rev(str, firstleft(str, 0)) != last(str))
			rev(str, rev(str, firstleft(str, 0) + 1));

		if (a == false) {
			cout << str << endl;
		}
		else {
			for (int i = 0; i < strlen(str); i++) {
				if (str[i] != '(' && str[i] != ')')
					str[i] = ' ';
				else if (str[i] == '(') {
					str[i] = '$';
				}
				else {
					str[i] = '?';
				}
			}
			cout << str << endl;
		}
	}
}