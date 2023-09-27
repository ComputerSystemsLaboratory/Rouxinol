//#include <bits/stdc++.h>
#include <complex>
#include <iostream>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;
typedef complex<double> xy_t;

double cross_product(xy_t a,xy_t b){
	return (conj(a)*b).imag();
}

double x[4],y[4];

int main(){
	while(true){
		rep(i,0,4) cin>>x[i]>>y[i];
		if(!cin) break;
		xy_t a(x[0],y[0]),b(x[1],y[1]),c(x[2],y[2]),p(x[3],y[3]);
		double pab,pbc,pca;
		pab=cross_product(a-p,b-p);
		pbc=cross_product(b-p,c-p);
		pca=cross_product(c-p,a-p);
		bool ok=0;
		if((pab>0&&pbc>0&&pca>0)||(pab<0&&pbc<0&&pca<0)) ok=1;
		//bool ok=abs(pab+pbc+pca)==abs(pab)+abs(pbc)+abs(pca);
		cout<<(ok?"YES":"NO")<<endl;
	}
}