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
	int n,k;cin>>n>>k;
	int w[100003];
	REP(i,n){cin>>w[i];}
	int l = 0,r = 1e9+1;
	while(abs(r-l)>1){
		int p = (r+l)/2;
		int j = 0;
		REP(i,k){
			int tmpp = 0;
			while(tmpp + w[j] <= p){
				tmpp += w[j];
				j++;
				if(j == n)break;
			}
			if(j==n)break;
		}
		if(j == n)r = p;
		else l = p;
	}
	cout << r << endl;
  return 0;
}