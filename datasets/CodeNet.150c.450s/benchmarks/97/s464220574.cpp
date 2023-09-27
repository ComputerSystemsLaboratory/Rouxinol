#include "bits/stdc++.h"
using namespace std;

int main(){
	int xp[]={-1,0,1,0};
	int yp[]={0,-1,0,1};
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		vector<pair<int,int> > a(n);
		a[0].first=0;
		a[0].second=0;
		int x1=0;
		int x2=0;
		int y1=0;
		int y2=0;
		for(int i=0;i<n-1;i++){
			int q,b;
			cin>>q>>b;
			a[i+1].first=a[q].first+xp[b];
			a[i+1].second=a[q].second+yp[b];
			x1=min(x1,a[i+1].first);
			x2=max(x2,a[i+1].first);
			y1=min(y1,a[i+1].second);
			y2=max(y2,a[i+1].second);
		}
		cout<<x2-x1+1<<" "<<y2-y1+1<<endl;
	}
	return 0;
}