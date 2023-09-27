#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,h;
    while(cin>>a>>b>>c>>d>>e>>f){
            h=0;g=0;
    h=(d*c-a*f)/(b*d-a*e);
    g=(c-b*h)/a;
    printf("%.3lf %.3lf\n",g,h);
    }
    return 0;

}