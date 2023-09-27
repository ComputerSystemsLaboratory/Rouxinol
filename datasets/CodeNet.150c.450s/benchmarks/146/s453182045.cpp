#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
signed main(){
        int n;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
                double x1, y1, x2, y2, x3, y3, x4, y4;
                scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
                double c1 = (y2-y1)/(x2-x1);
                double c2 = (y4-y3)/(x4-x3);
                if((x2-x1==0 && x4-x3==0) || fabs(c1-c2) <= 1E-10) printf("YES\n");
                else printf("NO\n");
        }
        return 0;
}