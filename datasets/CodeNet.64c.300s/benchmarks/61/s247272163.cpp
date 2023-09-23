#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define rep(i,a,n) for(int (i)=a;(i)<(int)(n);(i)++)
#define rrep(i,a,n) for(int (i)=(n)-1;(i)>=a;(i)--)
#define all(x) (x).begin(),(x).end()

typedef long long ll;

const int INF = 1e9;

int main() {
    int r,c;
	cin >> r >> c;
	int a[r+1][c+1];
	rep(i,0,r) rep(j,0,c) cin >> a[i][j];
	rep(i,0,r) {
		int sum = 0;
		rep(j,0,c) sum += a[i][j];
		a[i][c] = sum;
	}
	rep(i,0,c+1) {
		int sum = 0;
		rep(j,0,r) sum += a[j][i];
		a[r][i] = sum;
	}
	rep(i,0,r+1) {
		rep(j,0,c+1) {
			if(j>0) cout<<" ";
			cout<<a[i][j];
		}
		cout<<endl;
	}
}