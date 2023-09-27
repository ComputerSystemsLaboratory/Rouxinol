#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[200010];

int main ()
{
	int n, i;
	cin >> n;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
    int maxn = -1000000001;
	int minv = a[0];
	for(i = 1; i < n; i++)
	{
		maxn = max(a[i] - minv, maxn);
		minv = min(a[i], minv);
	}
	cout << maxn << endl;
	return 0;
} 
