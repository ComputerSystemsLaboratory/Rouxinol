#include<iostream>
#include<algorithm>
using namespace std;
pair <int,int> P[200];
int main(){
	int n,a,v,dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
	while(cin>>n,n){
		P[0].first=0;
		P[0].second=0;
		int maxx=0,maxy=0,minx=0,miny=0;
		for(int i=1;i<n;i++){
			cin>>a>>v;
			for(int j=0;j<4;j++){
				if(j==v){
					P[i].first=P[a].first+dx[j];
					P[i].second=P[a].second+dy[j];
					break;
				}
			}
			maxx=max(maxx,P[i].first);
			minx=min(minx,P[i].first);
			maxy=max(maxy,P[i].second);
			miny=min(miny,P[i].second);
		}
		cout<<maxx-minx+1<<' '<<maxy-miny+1<<endl;
	}
	return 0;
}