#include <bits/stdc++.h>

using namespace std;

const double ESP=1e-8;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)
#define eq(a,b) a-b<ESP

double x[3],y[3];
double xp,yp;

int main(){
  while (cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>xp>>yp){
    bool r=false,l=false;
    REP(i,3){
      double ax,ay,bx,by;
      ax=x[(i+1)%3]-x[i];
      ay=y[(i+1)%3]-y[i];
      bx=xp-x[i];
      by=yp-y[i];
      if (ax*by-bx*ay<0){
	r=true;
      }
      else{
	l=true;
      }
    }
    cout<<(r^l ? "YES" : "NO")<<endl;
  }
  return 0;
}