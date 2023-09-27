#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <functional>
#include <stack>
#include <numeric>
#define PI 3.1415926535
#define FOR(i,n) for (int i=0; i<(n) ;i++)
#define INF 114514810

using namespace std;

int n, m, l, t, a[100][100] = { 0 }, b[100][100] = { 0 };
long long int c = 0;
int main(){
	cin >> n >> m >> l;
	FOR(i, n)
		FOR(j, m)
		cin >> a[i][j];
	FOR(i, m)
		FOR(j, l)
		cin >> b[i][j];
	FOR(i, n){
		FOR(j, l){
			FOR(k, m){
				c += a[i][k] * b[k][j];
			}
		if (j != l - 1) cout << c << " ";
		else cout << c;
		c = 0;
		}
	cout << endl;
	}
}