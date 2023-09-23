#include <iostream>

using namespace std;

int main()
{
	long long a[100];
	long long max, bat,temp, temp1;
	bat = 10;
	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	
	for (int i = 1; i <= 11; i++)
	{
		max = 0;
		for (int j = 1; j <= bat; j++)
			if(a[j] > max)
			{
				max = a[j];
				temp1 = j;
			}
		
		temp = a[bat];
		a[bat] = a[temp1];
		a[temp1] = temp;
		bat--;
		
	}
	for (int i = 10; i > 7; i--)
		cout << a[i] << endl;
	
}