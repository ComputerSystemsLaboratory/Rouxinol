#include<vector>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      double x1,y1,x2,y2,x3,y3,x4,y4;
      scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
      if(fabs((x2-x1)*(y4-y3)-(y2-y1)*(x4-x3)) <=1e-10) printf("YES\n");
      else printf("NO\n");
    }
}