#include<iostream>
#include<map>
#include<vector>

using namespace std;

int combi(int n){
	return n*(n-1)/2;
}

int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		vector<int> x,y;
		x.push_back(0);
		y.push_back(0);

		for(int i=0;i<n;i++){
			int h;
			cin>>h;
			h+=y[i];
			y.push_back(h);
		}

		for(int i=0;i<m;i++){
			int w;
			cin>>w;
			w+=x[i];
			x.push_back(w);
		}
		//y=x+b → y-x=bとなる
		map<int,int> cnt;
		for(int i=0;i<n+1;i++){
			for(int j=0;j<m+1;j++){
				int diff=y[i]-x[j];
				cnt[diff]++;
			}
		}
		
		//全探索
		int ans=0;
		for(int i=-x[m];i<y[n]+1;i++){
			ans+=combi(cnt[i]);
		}
		
		cout<<ans<<endl;
	}
}