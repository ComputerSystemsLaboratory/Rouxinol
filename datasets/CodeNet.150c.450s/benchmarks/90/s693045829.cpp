#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a[100] = {0}, n, nmax = 0;
	while(cin >> n){
		a[n - 1]++;
	}
	for (int i = 0; i < 100; ++i)
	{
		nmax = max(nmax, a[i]);
	}
	for (int i = 0; i < 100; ++i)
	{
		if(a[i] == nmax){
			cout << i + 1 << endl;
		}
	}
	return 0;
}