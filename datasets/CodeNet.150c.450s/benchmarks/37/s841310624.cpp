#include<bits/stdc++.h>
using namespace std;
int main(){

  double a,b,c,d,e,f;

  while(cin >> a){
    cin >> b >> c >> d >> e >> f;
    
    if(c*e==f*b||a*e==d*b) printf("0.000 ");
    else printf("%.3f ",(c*e-f*b)/(a*e-d*b));
    if(c*d==f*a||b*d==e*a) printf("0.000\n");
    else printf("%.3f\n",(c*d-f*a)/(b*d-e*a));
  }

  return (0);
}