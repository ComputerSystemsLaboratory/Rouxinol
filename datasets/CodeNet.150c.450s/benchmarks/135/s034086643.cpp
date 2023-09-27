#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0&&m==0) break;
		int h[n],w[m];
		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		int y[n+1],nowy=0;
		y[0]=0;
		for(int i=0;i<n;i++){
			nowy=nowy+h[i];
			y[i+1]=nowy;
		}
		for(int i=0;i<m;i++){
			cin>>w[i];
		}
		int x[m+1],nowx=0;
		x[0]=0;
		for(int i=0;i<m;i++){
			nowx=nowx+w[i];
			x[i+1]=nowx;
		}
		int *hh=new int[1500001];
		int *ww=new int[1500001];
		for(int i=0;i<1500001;i++){
			hh[i]=0;
			ww[i]=0;
		}
		for(int i=0;i<n+1;i++){
			for(int j=i+1;j<n+1;j++){
				hh[y[j]-y[i]]++;
			}
		}
		for(int i=0;i<m+1;i++){
			for(int j=i+1;j<m+1;j++){
				ww[x[j]-x[i]]++;
			}
		}
		int k=0;
		for(int i=0;i<1500001;i++){
			k=k+ww[i]*hh[i];
		}
		cout<<k<<endl;
		delete[] hh;
		delete[] ww;
	}
    return 0;
}