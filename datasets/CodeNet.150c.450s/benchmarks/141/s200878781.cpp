#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x[3],y[3],xp,yp;
    while (cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp) {
        double c[3];
        c[0] = (x[1]-x[0]) * (yp-y[1]) - (y[1]-y[0]) * (xp-x[1]);
        c[1] = (x[2]-x[1]) * (yp-y[2]) - (y[2]-y[1]) * (xp-x[2]);
        c[2] = (x[0]-x[2]) * (yp-y[0]) - (y[0]-y[2]) * (xp-x[0]);
        
        if ((c[0]>0 && c[1]>0 && c[2]>0)||(c[0]<0 && c[1]<0 && c[2]<0)) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}