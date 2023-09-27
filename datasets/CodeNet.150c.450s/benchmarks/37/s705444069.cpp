#include <cstdio>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
  double a,b,c,d,e,f;
  vector<double> out;
  while (cin>>a>>b>>c>>d>>e>>f){
    out.push_back((c*e-b*f)/(a*e-b*d));
    out.push_back((c*d-a*f)/(b*d-a*e));
  }
  for (int i=0;i<out.size();i+=2){
    if (out[i]==0) out[i]=0;
    if (out[i+1]==0) out[i+1]=0;
    printf("%.3f %.3f\n",round(out[i]*1000)/1000.0,round(out[i+1]*1000)/1000.0);
  }
  return 0;
}