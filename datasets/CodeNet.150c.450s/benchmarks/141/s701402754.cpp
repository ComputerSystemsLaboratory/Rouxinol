//A Point in a Triangle
#include<bits/stdc++.h>
using namespace std;

//(x1, y1)と(x2, y2)の距離
double dis(double x1, double y1, double x2, double y2){
  return sqrt(pow(x1-x2, 2.0)+pow(y1-y2, 2.0));
}

//ヘロンの公式
double helon(double x1, double y1, double x2, double y2, double x3, double y3){
  double a=dis(x1, y1, x2, y2), b=dis(x2, y2, x3, y3), c=dis(x3, y3, x1, y1);
  double s=(a+b+c)/2.0;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)!=EOF){
    double hx1, hy1, hx2, hy2, hx3, hy3;//それぞれの点の中点
    hx1=(x1+x2)/2.0, hx2=(x2+x3)/2.0, hx3=(x3+x1)/2.0;
    hy1=(y1+y2)/2.0, hy2=(y2+y3)/2.0, hy3=(y3+y1)/2.0;
    double s=helon(hx1, hy1, hx2, hy2, hx3, hy3);
    if(s>helon(xp, yp, hx2, hy2, hx3, hy3) && s>helon(hx1, hy1, xp, yp, hx3, hy3) && s>helon(hx1, hy1, hx2, hy2, xp, yp)) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}