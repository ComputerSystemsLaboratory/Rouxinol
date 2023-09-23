#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define FORR(i,a,b) for (int i=a; i>=b; i--)

typedef long long ll;

int dp[1010][2]={};

int main(void){
	const int n=10;
	int a[n];
	int m;
	cin >> m;
	while (m--){
		REP(i,n) cin >> a[i];
		int x=0,y=0;
		bool f=1;
		REP(i,n){
			if (a[i]<x && a[i]<y){
				f=0;
				break;
			}
			else if (a[i]<y)
				x=a[i];
			else if (a[i]<x)
				y=a[i];
			else{
				if (x<y)
					y=a[i];
				else
					x=a[i];
			}
		}
		if (f)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0;
}