#include <iostream>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int p[801][801],n,N,d;
	while(cin >> N && N){
		rep(i,801)rep(j,801) p[i][j]=-1;
		p[400][400]=0;
		for(int k=1;k<N;k++){
			cin >> n >> d;
			rep(i,801)rep(j,801)
				if(p[i][j] == n){
					if(d==0)p[i][j-1]=k;
					if(d==1)p[i+1][j]=k;
					if(d==2)p[i][j+1]=k;
					if(d==3)p[i-1][j]=k;
				}
		}
		int fx=801,fy=801,lx=0,ly=0;
		rep(i,801){
			rep(j,801){
				if(~p[i][j]){
					lx = max(j,lx);
					fx = min(j,fx);
					ly = max(i,ly);
					fy = min(i,fy);
				}
			}
		}
		cout << lx-fx+1 << " "<< ly-fy+1 << endl;
	}
}