#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 2147483647
 
using namespace std;


bool dpssum(int *a, int b, int n)
{
	int y[21][2001];

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= b; j++)
			y[i][j] = 0;
	y[0][0] = 1;
	y[0][a[0]] = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= b; j++) {
			if (y[i - 1][j] == 1)  
				y[i][j] = 1;
			else if (j - a[i] >= 0 && y[i - 1][j - a[i]] == 1)
				y[i][j] = 1;
		}
	}

	if (y[n - 1][b] == 1) return (true);
	else				  return (false);
} 

int main(void)
{
	int n, q;
	int x;
	int a[20];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> x;
		if (dpssum(a, x, n))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}


	
	

return (0);
}