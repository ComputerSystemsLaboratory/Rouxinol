//#include <bits/stdc++.h>
//#include <stdio.h>
#include<iostream>
#include<cstdio>
#include<bitset>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<string.h>
#include<cmath>
#include<utility>
#include<functional>
#include<map>
#include<set>
#include<cctype>
#include<fstream>


#define FOR(i, a, b) for( int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for( int i=(a);i>=(b);i--)
#define LFOR(i, a, b) for( long long int i=(a);i<=(b);i++)
#define LRFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 600000000 //2000000000
#define LINF 1000000000000000000 //9000000000000000000 大きいとワ―シャルフロイドでオーバーフローを起こす
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int dy[5] = { 0,0,1,-1,0 };
int dx[5] = { 1,-1,0,0,0 };



int main(void) {

	int n;
	int now;

	cin >> n;
	vector<string> a(n), b(n);
	vector<int> num(n, 0);
	int p, q, r, s;
	FOR(i, 0, n - 1) {
		cin >> a[i] >> b[i];
	}

	FOR(i, 0, n - 1) {
		now = 1;
		FOR(j, 0, a[i].size() - 1) {
			if (a[i][j] >= '2'&&a[i][j] <= '9') {
				now = a[i][j] - '0';
			}
			else {
				if (a[i][j] == 'm') {
					num[i] += 1000 * now;
				}
				if (a[i][j] == 'c') {
					num[i] += 100 * now;
				}
				if (a[i][j] == 'x') {
					num[i] += 10 * now;
				}
				if (a[i][j] == 'i') {
					num[i] += now;
				}
				now = 1;
			}
		}
		now = 1;
		FOR(j, 0, b[i].size() - 1) {
			if (b[i][j] >= '2'&&b[i][j] <= '9') {
				now = b[i][j] - '0';
			}
			else {
				if (b[i][j] == 'm') {
					num[i] += 1000 * now;
				}
				if (b[i][j] == 'c') {
					num[i] += 100 * now;
				}
				if (b[i][j] == 'x') {
					num[i] += 10 * now;
				}
				if (b[i][j] == 'i') {
					num[i] += now;
				}
				now = 1;
			}
		}

		p = num[i] % 10;
		num[i] /= 10;
		q = num[i] % 10;
		num[i] /= 10;
		r = num[i] % 10;
		num[i] /= 10;
		s = num[i] % 10;

		if (s == 1) {
			cout << "m";
		}
		if (s >= 2) {
			cout << s << "m";
		}
		if (r == 1) {
			cout << "c";
		}
		if (r >= 2) {
			cout << r << "c";
		}
		if (q == 1) {
			cout << "x";
		}
		if (q >= 2) {
			cout << q << "x";
		}
		if (p == 1) {
			cout << "i";
		}
		if (p >= 2) {
			cout << p << "i";
		}
		cout << endl;



	}

	return 0;
}
