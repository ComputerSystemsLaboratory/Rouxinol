#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
    double a{},b{},c{},d{},e{},f{},x{},y{};
    while(cin>>a>>b>>c>>d>>e>>f){
        x=(c*e-b*f)/(a*e-b*d);
        y=(a*f-c*d)/(a*e-b*d);
        if(x==-0.0)x=0.0;
        if(y==-0.0)y=0.0;
        cout<<fixed<<setprecision(3)<<x<<' '<<y<<endl;
    }
    return 0;
}