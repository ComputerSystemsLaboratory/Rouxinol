#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <fstream>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef vector<pair<int, int> > vpii;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define foreach(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); itr++)
#define dbg(x) cout << #x"="<< (x) << endl
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back(a) 
#define in(x) cin >> x;
#define all(x) (x).begin(), (x).end()
#define INF 2147483600
#define fi first
#define se second
using namespace std;
int sum[5001];
int main(){
	int N;
	int ans = 0;
	while(cin>>N&&N){
		int index=0;
		ans = INT_MIN;
		FOR(i,1,N+1){
			cin>>sum[i];
			sum[i] += sum[i-1];
		}
		FOR(i,1,N+1){
			FOR(j,i,N+1){
				ans = max(ans,sum[j]-sum[i-1]);
			}
		}
		cout<< ans <<endl;
	}
}