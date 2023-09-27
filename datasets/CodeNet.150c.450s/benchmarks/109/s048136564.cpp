#include <bits/stdc++.h>
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
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

//int dy[]={0, 0, 1, -1, 0};
//int dx[]={1, -1, 0, 0, 0};

bool solve(){
	int n;
	scanf("%d", &n);
	if(n==0) return 0;
	
	vector<int> sh(n), sm(n), ss(n);
	vector<int> rh(n), rm(n), rs(n);
	vector<vector<vector<int> > > imos(30, vector<vector<int> >(65, vector<int>(65, 0)));
	REP(i, n){
		scanf("%d:%d:%d %d:%d:%d", &sh[i], &sm[i], &ss[i], &rh[i], &rm[i], &rs[i]);
		imos[sh[i]][sm[i]][ss[i]]+=1;
		imos[rh[i]][rm[i]][rs[i]]-=1;
	}
	
	REP(i, 24){
		REP(j, 60){
			REP(k, 60){
				if(i+j+k==0) continue;
				
				if(k>0) imos[i][j][k]+=imos[i][j][k-1];
				else if(j>0) imos[i][j][k]+=imos[i][j-1][59];
				else imos[i][j][k]+=imos[i-1][59][59];
			}
		}
	}
	
	int maxi=-1;
	REP(i, 24){
		REP(j, 60){
			REP(k, 60){
				//cout << imos[i][j][k] << endl;
				maxi=max(maxi, imos[i][j][k]);
			}
		}
	}
	
	printf("%d\n", maxi);
	return 1;
}

int main(){
	while(solve()){}
}