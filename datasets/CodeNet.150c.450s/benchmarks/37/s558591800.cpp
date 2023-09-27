#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

int main(void){
    
    int i,j=0,k = 0,l=0,m = 0,n= 0;
    double a,b,c,d,e,f;
    double x1[1000],x2[1000];
    double gyouretusiki;
    
    while((cin >> a >> b >> c >> d >> e >> f))
    {
        
        gyouretusiki = (a*e - d*b);
    
        x1[n] = (c/a) - (b/gyouretusiki)*(f -((d*c)/a));
    
        x2[n] = ((a) /(gyouretusiki))*(f-((d*c)/a));
        
        REP(i,5)
        {
            x1[n] = x1[n]*10;
            x2[n] = x2[n]*10;
        }
            x1[n] += 0.5;
            x2[n] += 0.5;
            x1[n] = (int)x1[n];
            x2[n] = (int)x2[n];
        REP(i,5)
        {
            x1[n] =x1[n]/10;
            x2[n] = x2[n]/10;
        }
        n++;
    }
    REP(i,n)
    printf("%.3f %.3f\n",x1[i],x2[i]);
    return 0;
    
}