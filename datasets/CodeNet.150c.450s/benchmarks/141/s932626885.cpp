#include<bits/stdc++.h>
using namespace std;

double x[3],y[3],xp,yp;
double EPS=1e-8;
int main(){
    while(scanf("%lf%lf",&x[0],&y[0])!=EOF){
        for(int i=1;i<3;i++)scanf("%lf%lf",&x[i],&y[i]);
        scanf("%lf%lf",&xp,&yp);

        double S=fabs((x[1]-x[0])*(y[2]-y[0])-(x[2]-x[0])*(y[1]-y[0]))/2;

        for(int i=0;i<3;i++){
            S-=fabs((x[i]-xp)*(y[(i+1)%3]-yp)-(x[(i+1)%3]-xp)*(y[i]-yp))/2;
        }

        if(fabs(S)<EPS)puts("YES");
        else puts("NO");
    }
    return 0;
}