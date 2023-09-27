#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <sstream>
using namespace std;
string p;
int n, q;
int a[10000], b[500];
int k, l;
int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cin >> q;
	l=0;
	for(int j=0; j<q; j++)
	{
		cin >> k;
		for(int i=0; i<n; i++)
		{
			if(k==a[i])
			{
				l+=1;
				break;
			}
		}
	}
	cout << l << endl;
    return 0;
}