#include<iostream>
using namespace std;

int main(){
    double x[4],y[4];
    while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]){
        double a[3],b[3],c[3],d[3];
        for(int i=0;i<3;i++){
            a[i]=x[(i+1)%3]-x[i];
            b[i]=y[(i+1)%3]-y[i];
        }
        for(int i=0;i<3;i++){
            c[i]=x[3]-x[i];
            d[i]=y[3]-y[i];
        }
        int suc=1;
        for(int i=0;i<3;i++){
            
            if((a[i]*b[(i+1)%3]-a[(i+1)%3]*b[i])*(a[i]*d[(i+1)%3]-c[(i+1)%3]*b[i])<0){
                suc=0;
                break;
            }
        }
        if(suc==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}