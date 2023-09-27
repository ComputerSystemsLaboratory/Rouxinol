#include<iostream>
#include<string>
#include <vector>
#include <cstdio>
#include<set>
using namespace std;
set<string> lst;

int main()
{
	int lst[10000];
	int a,b,w, n; cin >> w >> n;
	for (int i = 0; i < w; i++)
	{
		lst[i] = i + 1;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d,%d", &a, &b);
		swap(lst[a - 1], lst[b - 1]);
	}
	for (int i = 0; i <w; i++)
	{
		cout << lst[i] << endl;
	}
	return 0;
}