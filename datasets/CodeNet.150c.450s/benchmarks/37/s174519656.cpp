#include<iostream>
#include<cstdio>
#include<iomanip>
#include<vector>
#include<math.h>
using namespace std;
class SimultaneousEquation{ 
    public:
        void solve(int a,int b,int c,int d,int e,int f){ 
            double x,y;
            x=double(c*e-b*f)/(a*e-b*d);
            y=double(c*d-a*f)/(b*d-a*e);
	    if(x==0)x=0;
	    if(y==0)y=0;
            printf("%.3lf %.3lf\n",x,y);
            }
};
int main(){ 
    int a,b,c,d,e,f;
    SimultaneousEquation inst;
    while(cin>>a>>b>>c>>d>>e>>f){
        inst.solve(a,b,c,d,e,f);
    }
}