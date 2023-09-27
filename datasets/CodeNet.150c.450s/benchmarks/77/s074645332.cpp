#include<iostream>
#include<vector>
#include<map>
#define P pair<int,int>
using namespace std;
int main(){
	int m;
	vector<P>juels;
	while(cin>>m,m!=0){
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		juels.push_back(P(a,b));
	}
	
	int n,nx=10,ny=10;
	cin>>n;
	bool flag[100]={0};int cnt=0;
	for(int i=0;i<n;i++){
		int move;
		char muki;
		cin>>muki>>move;
		
		for(int k=0;k<move;k++){
		for(int j=0;j<juels.size();j++){
			if(juels[j].first==nx&&juels[j].second==ny)	flag[j]=1;
			}
		if(muki=='N')ny++;
		if(muki=='E')nx++;
		if(muki=='S')ny--;
		if(muki=='W')nx--;
				for(int j=0;j<juels.size();j++){
			if(juels[j].first==nx&&juels[j].second==ny)
				flag[j]=1;
			}
	}
	}
	for(int i=0;i<m;i++)if(flag[i])cnt++;
	if(cnt==m)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	juels.clear();
	}
return 0;
}