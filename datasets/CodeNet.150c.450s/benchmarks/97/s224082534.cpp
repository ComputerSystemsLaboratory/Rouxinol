#include<bits/stdc++.h>

using namespace std;

int mx[]={-1,0,1,0};
int my[]={0,-1,0,1};

int main(){
	int N;
	while(cin>>N,N){
		vector<pair<int,int>>v(N);
		v[0]=make_pair(0,0);
		for(int i=1;i<N;++i){
			int n,d;
			cin>>n>>d;
			v[i]=make_pair(v[n].first+mx[d],v[n].second+my[d]);
		}
		int min_x=1e9,max_x=-1e9;
		int min_y=1e9,max_y=-1e9;
		for(int i=0;i<N;++i){
			max_x=max(v[i].first,max_x);
			min_x=min(v[i].first,min_x);
			max_y=max(v[i].second,max_y);
			min_y=min(v[i].second,min_y);
		}
		cout<<max_x-min_x+1<<" "<<max_y-min_y+1<<endl;
	}
}