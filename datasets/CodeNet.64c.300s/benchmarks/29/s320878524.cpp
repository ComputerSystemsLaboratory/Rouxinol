#include<bits/stdc++.h>

#define ll long long
#define inf 1000000000
using namespace std;


int e;

int yy(int a){
		int i=0;
		while(i*i<=a){
				if(i*i==a)return i;
				i++;
		}
		return inf;
}

int zzz(int a){
		int i=0;
		while(i*i*i<=a){
				if(i*i*i==a)return i;
				i++;
		}
		return inf;
}

int main(){
		while(cin>>e,e){
				int ans=inf;
				for(int i=0;i*i*i<=e;i++){
						for(int j=0;j*j<=e;j++){
								if(i*i*i+j*j<=e){
										ans=min(ans,i+j+(e-i*i*i-j*j));
								}	
						}
				}
				cout<<ans<<endl;
		}
		return 0;
}