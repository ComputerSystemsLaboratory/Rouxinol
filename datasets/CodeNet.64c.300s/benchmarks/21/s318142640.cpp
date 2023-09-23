
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int main(){
    double a,b,c,d,e,f,x,y;
    while(cin>>a>>b>>c>>d>>e>>f){
        x=(c*e-b*f)/(e*a-b*d);
        y=(c*d-a*f)/(b*d-a*e);
        if(x==0)x=0.000;
        if(y==0)y=0.000;
        printf("%.3f ",x);
        printf("%.3f\n",y);
    }
    return 0;
}