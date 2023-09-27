#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <bitset>
#include <climits>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define RFOR(i,a,b) for (int i=(a)-1;i>=(b);i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 1e9;
const int MOD = 1e9 + 7;

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;cin>>n;
	char a[50][2],b[50][2];
	REP(i,n)cin>>a[i];
	memcpy(b,a,n*2*sizeof(char));
	REP(i,n){
		RFOR(j,n,i+1){
			if(b[j][1] < b[j-1][1])swap(b[j],b[j-1]);
		}
	}
	REP(i,n){if(i)cout << ' ';
		cout << b[i][0] << b[i][1];
		
	}cout << '\n' << "Stable" << endl;
	
	REP(i,n){
		int mini = i;
		FOR(j,i,n){
			if(a[j][1] < a[mini][1])mini = j;
		}
		if(mini != i)swap(a[mini],a[i]);
	}
	bool stable = true;
	REP(i,n){if(i)cout << ' ';
		cout << a[i][0] << a[i][1];
		if(b[i][0] != a[i][0])stable = false;
	}cout << '\n';
	if(stable)cout << "Stable" << endl;
	else cout << "Not stable" << endl;
  return 0;
}