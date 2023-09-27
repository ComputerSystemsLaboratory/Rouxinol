#include<bits/stdc++.h>
using namespace std;

int main(){

  double x1, y1, x2, y2, x3, y3, x, y;

  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y){

    double a = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    double b = x*(y1 - y2) + x1*(y2 - y) + x2*(y - y1);
    double c = x*(y2 - y3) + x2*(y3 - y) + x3*(y - y2);
    double d = x*(y3 - y1) + x3*(y1 - y) + x1*(y - y3);

    if((a<0 && b<0 && c<0 && d<0) || (a>0 && b>0 && c>0 && d>0))
      puts("YES");
    else puts("NO");

  }
}
      