#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int m,n_min,n_max;
	while(cin>>m>>n_min>>n_max,m){
		vector<int> sc(m);
		vector<pair<int,int> > dif_sc(m);
		
		REP(i,m){
			cin >> sc[i];
			if(i)dif_sc[i] = make_pair(sc[i] - sc[i-1],i);
		}
		int max_dif = 0,max_i;
		REP(i,m){
			if(dif_sc[i].second >= n_min && dif_sc[i].second <= n_max)
				if(max_dif >= dif_sc[i].first){
					max_dif = dif_sc[i].first;
					max_i = i;
				}
		}
		cout << max_i << endl;
	}
  return 0;
}