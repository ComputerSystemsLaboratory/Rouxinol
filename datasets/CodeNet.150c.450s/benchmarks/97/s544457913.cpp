#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int>P;

P mp[205];
int main() {
	int N;
	while(scanf("%d",&N),N){
	mp[0]=P(0,0);
	for(int i=1;i<N;i++){
		int n,d;scanf("%d%d",&n,&d);
		switch(d){
			case 0:mp[i]=P(mp[n].first-1,mp[n].second);break;
			case 1:mp[i]=P(mp[n].first,mp[n].second+1);break;
			case 2:mp[i]=P(mp[n].first+1,mp[n].second);break;
			case 3:mp[i]=P(mp[n].first,mp[n].second-1);break;
		}
	}
	int minx=INT_MAX,miny=INT_MAX,maxx=INT_MIN,maxy=INT_MIN;
	rep(i,N){
		minx=min(minx,mp[i].first);
		miny=min(miny,mp[i].second);
		maxx=max(maxx,mp[i].first);
		maxy=max(maxy,mp[i].second);
	}
	printf("%d %d\n",maxx-minx+1,maxy-miny+1);
}
}