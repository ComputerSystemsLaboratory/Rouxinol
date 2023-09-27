#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <cstdio>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<int, P> PP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

struct edge{
	int to, cost;
};

int main(){
	while(1){
		int n;
		scanf("%d", &n);
		if(n==0) return 0;

		vector<vector<llong> > v(15, vector<llong>(15, INF));
		int m=0;
		REP(i, n){
			int f, t, c;
			scanf("%d %d %d", &f, &t, &c);
			m=max(m, f);
			m=max(m, t);
			v[f][t]=c;
			v[t][f]=c;
		}
		m++;
		REP(i, m) v[i][i]=0;

		REP(i, m){
			REP(j, m){
				REP(k, m){
					v[j][k]=min(v[j][k], v[j][i]+v[i][k]);
					
				}
			}
		}

		int ans=0;
		vector<llong> sum(15, 0);
		REP(i, m){
			REP(j, m){
				if(v[i][j]>=INF) continue;
				sum[i]+=v[i][j];
			}
			if(sum[ans]>sum[i]) ans=i;
		}

		printf("%d %ld\n", ans, sum[ans]);
	}
}