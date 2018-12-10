#include<iostream>

using namespace std;


int main() {
	int array[100][100] = {}, row = 0, col = 0;
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> array[i][j];
		}
	}
	if (col >= row) {
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j <= i; j++) {
				if (j < row)
					cout << array[j][i - j] << endl;
			}
		}
		int count = col;
		while (count < row + col - 1) {
			for (int i = 1; i < row; i++) {
				if (count - i < col)
					cout << array[i][count - i] << endl;
			}
			count++;
		}
	}
	else {
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j <= i; j++) {
				if (j < row)
					cout << array[j][i - j] << endl;
			}
		}
	}

	int count = col;
	while (count < row + col - 1) {
		for (int i = 0; i < row; i++) {
			if (count - i < col)
				cout << array[i][count - i] << endl;
		}
		count++;
	}
	return 0;
}