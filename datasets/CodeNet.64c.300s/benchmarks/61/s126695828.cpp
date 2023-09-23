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

using namespace std;

int r, c, t, d[100][100] = { 0 } , sum = 0;

int main(){
	cin >> r >> c;
	FOR(i, r)
		FOR(j, c) {
		cin >> t;
		d[i][j] = t;
	}
	FOR(i, r){
		FOR(j, c)
			cout << d[i][j] << " ";
		cout << accumulate(d[i], d[i] + c, 0) << endl;
	}
	FOR(i, c) {
		t = 0;
		FOR(j, r) t += d[j][i];
		cout << t << " ";
		sum += t;
	}
	cout << sum << endl;
}