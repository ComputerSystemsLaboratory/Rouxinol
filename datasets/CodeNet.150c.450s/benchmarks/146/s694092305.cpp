#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  double x1,y1,x2,y2,x3,y3,x4,y4,ab,cd;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    ab = (y2-y1)/(x2-x1);
    cd = (y4-y3)/(x4-x3);
    if(ab == cd){
      cout << "YES" << endl;
    }else {
      cout << "NO" << endl;
    }
  }
}