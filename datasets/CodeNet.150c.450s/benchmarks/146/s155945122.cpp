#include<iostream>
#include<complex>
#include<cmath>
using namespace std;
typedef complex<double> xy_t;

xy_t P[4];

double cross(xy_t p,xy_t q){
    return (conj(p)*q).imag();
}

int main(){
    int n;
    double eps=pow(10,-11);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<4;++j){
            double x,y;
            cin>>x>>y;
            P[j]=xy_t(x,y);
        }
        
        xy_t a[2]={
            P[0]-P[1],
            P[2]-P[3]
        };

        bool flag=(abs(cross(a[0],a[1]))<eps);

        cout<<(flag?"YES":"NO")<<"\n";

    }
}