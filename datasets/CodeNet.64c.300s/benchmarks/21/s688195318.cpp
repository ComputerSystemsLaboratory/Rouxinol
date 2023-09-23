#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
    float a,b,c,d,e,f,x,y;
    while(cin>>a>>b>>c>>d>>e>>f){
        x=(e*c-b*f)/(a*e-b*d);
        y=(-d*c+a*f)/(a*e-b*d);
        if(x==0)x=0;
        if(y==0)y=0;
        cout<<fixed<<setprecision(3)<<x<<" "<<fixed<<setprecision(3)<<y<<endl;
        }
        return 0;
}