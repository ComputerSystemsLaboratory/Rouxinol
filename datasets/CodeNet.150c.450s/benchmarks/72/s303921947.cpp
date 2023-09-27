#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;

	getline(cin, a);

	for (int i = 0; i < a.size();i++)
	{
		if ('a' <= a[i] && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		else if ('A' <= a[i] && a[i] <= 'Z')
		{
			a[i] += 32;
		}
		cout << a[i];
	}
	cout << endl;

	return 0;
}