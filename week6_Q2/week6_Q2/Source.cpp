#include<iostream>
using namespace std;

int main()
{
	int n;
	char a[260];
	int i, j;
	cin >> n;
	cin.get();
	for (i = 0; i<n; i++)
	{
		cin.getline(a, 260);
		for (j = 0; a[j] != '\0'; j++)
		{
			switch (a[j])
			{
			case 'A':
				cout<<"T";
				break;
			case 'G':
				cout<<"C";
				break;
			case 'C':
				cout<<"G";
				break;
			case 'T':
				cout<<"A";
				break;
			}
		}
		cout << endl;
	}
	return 0;
}