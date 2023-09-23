#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    while(cin >> a >> b >> c >> d >> e >> f)
        printf("%.3f %.3f\n",((e*c-b*f)/(a*e-b*d)==-0.0? 0.0:(e*c-b*f)/(a*e-b*d)),((a*f-c*d)/(a*e-b*d)==-0.0? 0.0:(a*f-c*d)/(a*e-b*d)));
    return 0;
}