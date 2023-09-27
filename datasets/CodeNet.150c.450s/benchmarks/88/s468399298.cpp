#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<(int)N;i++)
#define ck(n,a,b) ((a)<=(n)&&(n)<(b))
#define p(s) cout<<(s)<<endl
#define F first
#define S second
typedef long long ll;
using namespace std;

int main() {
	int h, w;
	while(cin>>h>>w, h||w){
		int val=h*h+w*w;
		int ans=10000000;
		int hh, ww;

		//REP(i, 1, 150){
		for(int i=149; i>0; i--){
			REP(j, i+1, 151){
				int tmp=i*i+j*j;
				if(tmp>val){
					if(tmp<=ans){
						ans=tmp;
						hh=i;
						ww=j;
					}
				}else if(tmp==val && i>h){
					ans=tmp;
					hh=i;
					ww=j;
				}
				/*
				int tmp=i*i+j*j;
				if(tmp>val){
					if(tmp==ans&&i<hh){
						hh=i;
						ww=j;
					}
					else if(tmp<ans){
						ans=tmp;
						hh=i;
						ww=j;
					}
				}else if(tmp==val && i>h){
					if(tmp==ans&&i>hh)continue;
					hh=i;
					ww=j;
				}
				*/
			}
		}

		cout<<hh<<" "<<ww<<endl;
	}
	return 0;
}