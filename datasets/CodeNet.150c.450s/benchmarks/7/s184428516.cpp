#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		for (int j = 0; j < 10; j++)
		{
			if (a[0] < a[i])swap(a[i], a[0]);
		}

		for (int j = 0; j < 10; j++)
		{
			if (a[1] < a[i])swap(a[i], a[1]);
		}
			
		for (int j = 0; j < 10; j++)
		{
			if (a[2] < a[i])swap(a[i], a[2]);
		}

	}
	cout << a[0] << endl;
	cout << a[1] << endl; 
	cout << a[2] << endl;
	
}