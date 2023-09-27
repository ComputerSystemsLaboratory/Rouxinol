#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  float x1,y1,x2,y2,x3,y3,xp,yp;
  float a,b,c,d,e,f,s1,s2,t1,t2;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    t2 = 0;
    a = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    b = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    c = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    s1 = (a+b+c)/2.0; // 3辺を頂点とする三角形の面積
    t1 = sqrt(s1*(s1-a)*(s1-b)*(s1-c));
    d = sqrt((xp-x1)*(xp-x1)+(yp-y1)*(yp-y1));
    e = sqrt((x3-xp)*(x3-xp)+(y3-yp)*(y3-yp));
    f = sqrt((x2-xp)*(x2-xp)+(y2-yp)*(y2-yp));
    s2 = (a+e+f)/2; 
    t2 += sqrt(s2*(s2-a)*(s2-e)*(s2-f));
    s2 = (b+d+e)/2; 
    t2 += sqrt(s2*(s2-b)*(s2-d)*(s2-e));
    s2 = (c+d+f)/2; 
    t2 += sqrt(s2*(s2-c)*(s2-d)*(s2-f));
    if( (t1 + 0.00001) >= t2){
      cout << "YES" << endl;
    }else {
      cout << "NO" << endl;
    }
  }
}