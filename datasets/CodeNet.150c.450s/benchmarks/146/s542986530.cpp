#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;


typedef complex<double> xy_t;

double cross_product(xy_t a,xy_t b){
	return (conj(a)*b).imag();
}
const double eps=1e-11;
double x[4],y[4];
int n;

int main(){
	cin>>n;
	rep(i,0,n){
		rep(j,0,4){
			cin>>x[j]>>y[j];
		}
		xy_t a[2]={xy_t(x[0],y[0])-xy_t(x[1],y[1]),xy_t(x[2],y[2])-xy_t(x[3],y[3])};
		bool p=abs(cross_product(a[0],a[1]))<eps;
		cout<<(p?"YES":"NO")<<endl;
	}
}