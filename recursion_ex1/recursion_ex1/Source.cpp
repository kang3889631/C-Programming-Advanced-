#include <iostream>
using namespace std;

int recur() {
	char c;
	c = cin.get();
	if (c != '\n')
		recur();
	cout << c;
	return 0;
}
int main() {
	recur();
	return 0;
}

//This is the first recursion logic program
//which reverses the input string
//Every time recur() has been called, memory creates a new space for this recur().
//recur() function ends with c=='\n', then, print out last character, then back to previous recur(), print out previous character, 
//keep on until the first input character is printed out.