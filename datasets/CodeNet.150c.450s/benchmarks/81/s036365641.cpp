#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max)) 

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	while(1){
		int n,ans_k,ans_sum = INT_MAX,m = 0;
		cin >> n;
		if(n == 0) break;
		VI a(n),b(n),c(n);
		rep(i,n){
			cin >> a[i] >> b[i] >> c[i];
			if(m < a[i] || m < b[i])
				m = a[i] > b[i]? a[i]:b[i];
		}
		VI cost(m + 1);
		priority_queue<PII,vector<PII >,greater<PII> > que;
		rep(k,cost.size()){
			int res = 0;
			fill(all(cost), INT_MAX);
			que.push(mp(0,k));
			cost[k] = 0;
			while(!que.empty()){
				int d = que.top().first, u = que.top().second;
				que.pop();
				if(cost[u] < d) continue;
				rep(i,n){
					if(u == a[i] && cost[u] + c[i] < cost[b[i]]){
						cost[b[i]] = cost[u] + c[i];
						que.push(mp(cost[b[i]], b[i]));
					}
					if(u == b[i] && cost[u] + c[i] < cost[a[i]]){
						cost[a[i]] = cost[u] + c[i];
						que.push(mp(cost[a[i]], a[i]));
					}
				}
			}
			rep(i,cost.size()){
				res += cost[i];
			}
			if(res < ans_sum){
				ans_k = k;
				ans_sum = res;
			}
		}
		cout << ans_k << " " << ans_sum << endl;
	}
	return 0;
}