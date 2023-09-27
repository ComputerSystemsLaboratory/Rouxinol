#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	long long n;
	while(1){
		cin>>n;
		if(!n)break;
		char from[n],to[n];
		bool check[n];
		rep(i,n){
			cin>>from[i]>>to[i];
		}
		char desk;
		long long m;
		string ans="";
		cin>>m;
		for(long long i=0;i<m;i++){
			cin>>desk;
			for(long long j=0;j<n;j++)check[j]=false;
			int cnt=0;
			for(long long j=0;j<n;j++){
				if(desk==from[j]){
					if(!check[j]){
						ans+=to[j];
						check[j]=true;
						cnt++;
					}	
				}
				if(cnt)break;
			}
			if(!cnt)ans+=desk;
		}
		cout<<ans<<endl;
	}
	return 0;
}