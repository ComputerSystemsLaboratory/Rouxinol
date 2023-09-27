#include <iostream>
using namespace std;
int main(){
	int m,nmin,nmax;
	while(cin>>m>>nmin>>nmax){
		if(m==0&&nmin==0&&nmax==0) break;
		int p[m];
		for(int i=0;i<m;i++){
			cin>>p[i];
		}
		int g[nmax-nmin+1],gmax=0,nn;
		for(int i=0;i<=nmax-nmin;i++){
			g[i]=p[nmin+i-1]-p[nmin+i];
			if(g[i]>=gmax){
				gmax=g[i];
				nn=nmin+i;
			}
		}
		cout<<nn<<endl;
	}
    return 0;
}