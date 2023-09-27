#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(!n&&!m)break;
		int data[11];
		memset(data,0,sizeof(data));
		while(n--){
			int d,p;
			cin>>d>>p;
			data[p]+=d;
		}
		int k=11,ans=0;
		while(--k){
			if(data[k]>0){
				if(data[k]>=m){
					data[k]-=m;
					for(int i=k;i>0;i--){
						ans+=i*data[i];
					}
					break;
				}else{
					m-=data[k];
				}
			}
		}
		cout<<ans<<endl;
	}
}
		