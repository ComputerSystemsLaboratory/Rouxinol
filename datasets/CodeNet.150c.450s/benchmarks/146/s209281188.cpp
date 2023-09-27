#include <iostream>
using namespace std;
  
int main() {
    int N;
    long double x[4],y[4];
    cin>>N;
    while(N--){
        for(int i=0;i<4;i++) cin>>x[i]>>y[i];
        long double y1=y[1]-y[0]; long double x1=x[1]-x[0];
        long double y2=y[3]-y[2]; long double x2=x[3]-x[2];
        if(y1*x2==y2*x1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}