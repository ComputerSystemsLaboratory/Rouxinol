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
	vector<int> a(n),w(1 << n,0);REP(i,n)cin>>a[i];
	int q;cin>>q;
	REP(bit,1 << n){
		REP(i,n){
			if(bit & (1 << i)){
				w[bit] += a[i];
			}
		}
	}
	REP(i,q){
		int m;cin>>m;
		bool found = false;
		REP(bit,1<<n){
			if(w[bit]==m){found = true;break;}
		}
		if(found)cout << "yes" << endl;
		else cout << "no" << endl;
	}
  return 0;
}