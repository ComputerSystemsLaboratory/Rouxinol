#include<cstdio>
#include<cmath>
int main(){
    double a[6];
    double x,y;
    for(;;){
        for(int i=0;i<6;i++){
            if(scanf("%lf",&a[i])==-1)return 0;
        }
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
        printf("%.3lf %.3lf\n",rint(x*1000)/1000.0,rint(y*1000)/1000.0);
    }
}