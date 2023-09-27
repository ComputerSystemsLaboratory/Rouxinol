#include<bits/stdc++.h>
using namespace std;
long long n,T;
long long base[70];
long long a[210];
string b;
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(long long i=1;i<=n;++i){
			cin>>a[i];
		}
		cin>>b;
		memset(base,0,sizeof(base));
		bool y=1;
		for(long long i=n;i>=1&&y;--i){
			if(b[i-1]=='0'){
				long long x=a[i];
				for(long long j=0;j<64;++j){
					if((x>>j)&1){
						if(!base[j]){
							base[j]=x;
							break;
						}
						else{
							x^=base[j];
						}
					}
				}	
			}
			else{
				long long x=a[i];
				for(long long j=0;j<64;++j){
					if((x>>j)&1){
						if(base[j]){
							x^=base[j];
						}
						else break;
					}
				}
				if(x){
					y=0;
				}
			}
		}
		cout<<(!y)<<'\n';
	}
	return 0;
}