#include<iostream>
#include <cstdlib>
#include<list>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<stack>
#define MAX 1001
using namespace std;
int main() {
	int n; cin >> n;
	string x, y; int data[MAX][MAX] = {0,0};
	for (int d = 0; d <n; d++)
	{
		cin >> x >> y;
		for (int i = 0; i < y.size(); i++)
		{
			for (int j = 0; j < x.size(); j++)
			{
				if (y[i] == x[j]) {
					data[j + 1][i + 1] = data[j][i] + 1;
				}
				else {
					data[j + 1][i + 1] = max(data[j + 1][i], data[j][i + 1]);
				}
			}
		}
		cout << data[x.size()][y.size()]<<endl;
	}
	
	return 0;
}