#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a,b,ans;
	while(1){
		cin>>n>>m;
		if(n==0) break;
		ans=0;
		vector<pair<int,int> > D;
		for(int i=0;i<n;i++){
			cin>>b>>a;
			D.push_back(make_pair(a,b));
		}
		sort(D.begin(),D.end(),greater<pair<int,int> >());
		for(int i=0;i<n;i++){
			if(m<0) m=0;
			if(m-D[i].second<0){
				ans+=(D[i].second-m)*D[i].first;
				m=0;
			}
			else m-=D[i].second;
		}
		cout<<ans<<endl;
	}
	return 0;
}
