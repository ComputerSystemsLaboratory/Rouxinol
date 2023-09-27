#include<cstdio>
#include<cmath>
#include<utility>
using namespace std;
pair<double,double> solve(double *a){
    double x,y;
    if(a[0]==0){
        y=a[2]/a[1];
        x=(a[5]-a[4]*y)/a[3];
    }else if(a[1]==0){
        x=a[2]/a[0];
        y=(a[5]-a[3]*x)/a[4];
    }else if(a[3]==0){
        y=a[5]/a[4];
        x=(a[2]-a[1]*y)/a[0];
    }else if(a[4]==0){
        x=a[5]/a[3];
        y=(a[2]-a[0]*x)/a[1];
    }else{
        y=(a[2]-(a[5]*(a[0]/a[3])))/(a[1]-(a[4]*(a[0]/a[3])));
        x=(a[2]-a[1]*y)/a[0];
    }
    return make_pair(x,y);
}
int main(){
    double a[6];
    for(;;){
        for(int i=0;i<6;i++){
            if(scanf("%lf",&a[i])==-1)return 0;
        }
        pair<double,double> ans=solve(a);
        printf("%.3lf %.3lf\n",rint(ans.first*1000)/1000.0,rint(ans.second*1000)/1000.0);
    }
}