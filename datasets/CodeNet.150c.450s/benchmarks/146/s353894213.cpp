#include<bits/stdc++.h>
using namespace std;
const double EPS=1e-10;
double x[4],y[4];
int main(){
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<4;i++)cin>>x[i]>>y[i];
        for(int i=0;i<4;i+=2){
            x[i]-=x[i+1];y[i]-=y[i+1];
        }
        if(fabs(x[0]*y[2]-x[2]*y[0])<EPS)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}