#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
#define ck(a,b) (0<=(a)&&(a)<(b))

using namespace std;


int main(){
	int n,m;
	while(cin>>n>>m&&(n||m)){
		int t=1000,h=1000;
		int sumt=0,sumh=0;
		int taro[101],hanako[101];
		REP(i,0,n){
			cin>>taro[i];
			sumt+=taro[i];
		}
		REP(i,0,m){
			cin>>hanako[i];
			sumh+=hanako[i];
		}

		REP(i,0,n){
			REP(j,0,m){
				if(2*(taro[i]-hanako[j])==sumt-sumh){
					if(t+h>taro[i]+hanako[j]){
						t=taro[i];
						h=hanako[j];
					}
				}
			}
		}
		if(t==1000) cout<<"-1"<<endl;
		else cout<<t<<" "<<h<<endl;
	}
	return 0;
}