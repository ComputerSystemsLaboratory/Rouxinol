#include<iostream>
#include <cstdlib>
#include<list>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<stack>
#define MAX 101
using namespace std;
int main() {
	int n, a, k, d, data[MAX][MAX] = { 0,0 }; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> d;
			data[i][d - 1] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j)cout << " ";
			cout << data[i][j];
		}
		cout << endl;
	}
	return 0;
}