#include <iostream>
using namespace std;
int n;
int m =0;
int *a;

void bubble_sort()
{
	bool flag = true;
	while (flag)
	{
		flag =false;  
		for (int i=n-1; i>0; i--)
		{
			int ai = a[i];
			if(ai < a[i-1]) 
			{
				a[i] = a[i-1];
				a[i-1] = ai;
				flag = true;
				m++;
			}
		}
	}
}

int main()
{
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n;	i++)
	{
		cin >> a[i];
	}
	
	bubble_sort();
	
	for (int i=0; i<n;	i++)
	{
		if (i) cout << ' ';
		cout << a[i];
	}
	
	cout << endl;
	cout << m << endl;
	
	return 0;
}