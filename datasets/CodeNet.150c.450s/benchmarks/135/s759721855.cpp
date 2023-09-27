#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>

using namespace std;

#define INF 999999999
#define REP(i,n) for(int i=0; i<(int)(n); i++)

int main(){
	int i, j, n, m, w[1501], h[1501];
	vector<int> ww, hh;
	int ans;
	
	w[0]=0;
	h[0]=0;
	while(1){
		cin >> n >> m;
		if(!n) break;
		ans = 0;
		ww.clear();
		hh.clear();
		REP(a,n){
			cin >> w[a+1];
			w[a+1]+=w[a];
		}
		REP(a,m){
			cin >> h[a+1];
			h[a+1]+=h[a];
		}
		REP(a,n)for(i=a+1;i<=n;i++) ww.push_back(w[i]-w[a]);
		REP(a,m)for(i=a+1;i<=m;i++) hh.push_back(h[i]-h[a]);
		sort(ww.begin(),ww.end());
		sort(hh.begin(),hh.end());
		int x, y;
		i=0, j=0;
		while(i<ww.size()&&j<hh.size()){
			if(ww[i]<hh[j])i++;
			else if(ww[i]>hh[j])j++;
			else if(ww[i]==hh[j]){
				x=1, y=1;
				while(ww[i]==ww[i+1]){
					x++;
					i++;
				}
				while(hh[j]==hh[j+1]){
					y++;
					j++;
				}
				//cout<<hh[j]<<"~"<<x<<"~"<<y<<endl;
				ans += x*y;
				i++;
				j++;
			}
		}
		cout << ans <<endl;
	}
	return 0;
}