#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    double a,b,c,d,e,f,t,u,v;
    vector<double> x(0),y(0);
    while (cin>>a>>b>>c>>d>>e>>f)
    {
        x.push_back(0);
        y.push_back(0);
        t=a; u=b; v=c;
        a*=d;  b*=d; c*=d;
        d*=t; e*=t; f*=t;
        y[y.size()-1]=(c-f)/(b-e);
        x[x.size()-1]=(v-u*y[y.size()-1])/t;
    }
    for (int i=0; i<x.size(); i++)
    {
        printf("%.3f %.3f\n", x[i], y[i]);
        //cout<<x[i]<<".000 "<<y[i]<<".000\n";
    }
    return 0;
}

