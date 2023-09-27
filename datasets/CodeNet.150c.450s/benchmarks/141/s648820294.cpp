
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
#include <complex>
#include <algorithm>
#define rep(i,n) for(int i = 0;i < n;i++)
using namespace std;

typedef complex<double> P;
const double EPS = 1e-8;
const double INF = 1e6;

double cross(P a,P b){
    return imag(conj(a)*b);
}


int main(){
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while(cin >>x1>> y1>> x2>> y2>> x3>> y3>> xp>> yp){
        P v1=P(x1,y1),v2=P(x2,y2),v3=P(x3,y3),vp=P(xp,yp);
        if((cross(vp-v1,vp-v2)>0)&&(cross(vp-v2,vp-v3)>0)&&(cross(vp-v3,vp-v1)>0)){
            cout << "YES"<<endl;
        }else if((cross(vp-v1,vp-v2)<0)&&(cross(vp-v2,vp-v3)<0)&&(cross(vp-v3,vp-v1)<0)){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }

    }
}