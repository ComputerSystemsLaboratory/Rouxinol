#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <string>
#include <sstream>
#include <bitset>
using namespace std;
#define INF	100000000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define SS stringstream
#define rep(i,n) for(int i = 0; i < n; i++)
#define SORT(x) sort((x).begin(), (x).end())
#define clr(a,b) memset((a),(b),sizeof(a))
typedef long long int ll;
typedef pair<int, int> P;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<P> Vp;
typedef priority_queue<P, vector<P>, greater<P> > PQ;

int main(){
	int n,m;
	while(scanf("%d%d", &n, &m), n||m){
		Vi h(n), w(m);
		map<int,int> ma;
		ll ans = 0;
		rep(i,n) scanf("%d", &h[i]);
		rep(i,m) scanf("%d", &w[i]);
		rep(i,n){
			int cnt = 0;
			for(int j = i; j < n; j++){
				cnt += h[j];
				ma[cnt]++;
			}
		}
		rep(i,m){
			int cnt = 0;
			for(int j = i; j < m; j++){
				cnt += w[j];
				ans += ma[cnt];
			}
		}
		printf("%lld\n", ans);
	}
}