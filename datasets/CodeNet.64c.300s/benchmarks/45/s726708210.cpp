#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include<stdio.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)

using namespace std;

int main(){
	int n, m, p;
	int x[100];
	while (cin >> n >> m >> p) {
		if (n == 0 && m == 0 && p == 0) {
			break;
		}
		int total = 0;
		int get = 0;
		int haito = 0;
		REP(i, n) {
			cin >> x[i];
			total += x[i];
		}
		get = total*100 * (100-p) / 100;
		if (x[m - 1] != 0) {
			haito = get / x[m - 1];
		}
		else {
			haito = 0;
		}
		cout << haito << endl;
	}
	return 0;
}
