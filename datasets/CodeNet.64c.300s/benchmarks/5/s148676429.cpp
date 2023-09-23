#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n[10];
	for(int i = 0; i < 10; i++)
	{
		cin >> n[i];
	}
	
	int max = 0;
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = i+1; j < 10; j++)
		{
			if(n[i] < n[j]) swap(n[i], n[j]);
		}
	}
	
	cout << n[0] << endl;
	cout << n[1] << endl;
	cout << n[2] << endl;
	
	return 0;
}