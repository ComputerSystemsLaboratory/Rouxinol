#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a[3];
	
	for (int i = 1; i <= 3; i++)
	{
		cin >> a[i];
	}
	if (a[1]<a[2]&&a[2]<a[3])
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}