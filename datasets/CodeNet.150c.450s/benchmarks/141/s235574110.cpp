#include <iostream>
#include <complex>
using namespace std;

#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<n;i++)
#define EPS 1e-9

typedef complex<double> P;

double x[4],y[4],xp,yp;

double cross(P a, P b){
	return imag( conj(a) * b );
}

int main(){
	while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp){
		
		P p(xp, yp), q[4];
		rep(i,3) q[i] = P(x[i], y[i]);
		
		int posi=0, nega=0;
		rep(i,3){
			double cr = cross( q[(i+1)%3] - q[i], p - q[i]);
			if(cr > EPS) posi++;
			if(cr < EPS) nega++;
		}
		cout<<(posi==3 || nega==3 ? "YES" : "NO")<<endl;
	}
}