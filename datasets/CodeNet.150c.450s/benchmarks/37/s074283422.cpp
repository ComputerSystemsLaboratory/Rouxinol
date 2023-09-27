#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    float a,x,b,y,c,f,e,d,y2;
    while(cin>>a>>b>>c>>d>>e>>f){y2=0;y=0;
        
        y2=b*e*y;
              x=(c*e-f*b-y2*2)/(a*e-d*b);
                y=(c-(a*x))/b;
        if(x==0){x=0;}
        
        printf("%.3f %.3f",x,y);cout<<endl;}
    
    return 0;
}