#include<iostream>
#include<complex>
using namespace std;
typedef complex<double> xy_t;

double cross(xy_t a,xy_t b){
    return (conj(a)*b).imag();
}

int main(){
    double x[4],y[4];

    while(true){
        for(int i=0;i<4;++i){
            cin>>x[i]>>y[i];
        }
        if(!cin) break;

        xy_t a(x[0],y[0]), b(x[1],y[1]), c(x[2],y[2]), p(x[3],y[3]);
        double pab=cross(a-p,b-p),pbc=cross(b-p,c-p),pca=cross(c-p,a-p);
        bool ok=(pab*pbc>0 && pbc*pca>0);
        cout<<(ok?"YES":"NO")<<"\n";
    }
}