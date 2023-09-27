#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    
    while(cin>>a>>b>>c>>d>>e>>f){
    
        double x=(e*c-b*f)/(e*a-b*d);
        double y=(d*c-a*f)/(d*b-a*e);
    
        printf("%.3f %.3f\n",x+0.0,y+0.0);
    }
    
    return 0;
    
}