#include <bits/stdc++.h>
using namespace std;

double relative(double ax,double ay,double bx,double by){
    return ax*by-ay*bx;
}

int main(void){
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
        double r1=relative(x1-x3, y1-y3, xp-x1, yp-y1);
        double r2=relative(x2-x1, y2-y1, xp-x2, yp-y2);
        double r3=relative(x3-x2, y3-y2, xp-x3, yp-y3);
        if((r1<0&&r2<0&&r3<0) || (r1>0&&r2>0&&r3>0)) cout << "YES" <<"\n";
        else cout << "NO" << "\n";
    }
}

