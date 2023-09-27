#include<iostream>
#include<algorithm>
#include<cmath>
#include <vector>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    while(cin >> a >> b >> c >> d >> e >> f){
        double y;
        if(d!=0) y = (c - f * (double)a/d)/(b - e * (double)a/d);
        else y = (f - c * (double)d/a)/(e - b * (double)d/a);
        double x;
        if(a!=0) x = (c - b * y)/a;
        else x = (f - e * y)/d;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}