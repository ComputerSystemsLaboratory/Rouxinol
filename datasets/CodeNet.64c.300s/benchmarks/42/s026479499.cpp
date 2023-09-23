#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		int h[21][21];
		lp(i,21){
			lp(j,21){
				h[i][j]=0;
			}
		}
		lp(i,n){
			int a,b;
			cin>>a>>b;
			h[a][b]=1;
		}
		int m,count=0;
		cin>>m;
		int nowx=10,nowy=10;
		if(h[nowx][nowy]==1){
			count++;
			h[nowx][nowy]=0;
		}
		lp(i,m){
			char a;
			int b;
			cin>>a>>b;
			if(a=='N'){
				lp(j,b){
					nowy++;
					if(h[nowx][nowy]==1){
						h[nowx][nowy]=0;
						count++;
					}
				}
			}
			if(a=='S'){
				lp(j,b){
					nowy--;
					if(h[nowx][nowy]==1){
						h[nowx][nowy]=0;
						count++;
					}
				}
			}			
			if(a=='E'){
				lp(j,b){
					nowx++;
					if(h[nowx][nowy]==1){
						h[nowx][nowy]=0;
						count++;
					}
				}
			}
			if(a=='W'){
				lp(j,b){
					nowx--;
					if(h[nowx][nowy]==1){
						h[nowx][nowy]=0;
						count++;
					}
				}
			}
		}
		if(count==n)
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
