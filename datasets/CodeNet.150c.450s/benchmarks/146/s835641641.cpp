#include<iostream>
#include<complex>
#include<cmath>
using namespace std;
typedef complex<double> xy_t;

int n;
double x,y;
xy_t abcd[4];
const double eps=1e-11;

double cross_product(xy_t a,xy_t b){ //クロス積
    return (conj(a)*b).imag();
}


int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>x>>y;
            abcd[j]=xy_t(x,y);
        }
        bool p=abs(cross_product(abcd[0]-abcd[1],abcd[2]-abcd[3]))<eps; //面積がepsより小さいか
        if(p){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}
