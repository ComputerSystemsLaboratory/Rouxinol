#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
signed main(void){
    double x[4],y[4],x0,y0;
    while(cin>>x[0]>>y[0]){
    for(int i=1;i<3;i++)
        cin>>x[i]>>y[i];
    cin>>x0>>y0;
    x[3]=x[0],y[3]=y[0];
    int l=0,r=0;
    for(int i=0;i<3;i++){
        double ax=x[i+1]-x[i],ay=y[i+1]-y[i];
        double px=x[i]-x0,py=y[i]-y0;
        if(ax*py-ay*px<0)
            r=1;
        else
            l=1;
    }
    cout<<(l!=r ? "YES" : "NO")<<endl;
	}
    return 0;
}