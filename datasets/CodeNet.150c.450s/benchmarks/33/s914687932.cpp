#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main(){
  int x,y,s;
  while( cin >> x >> y >> s, x|y|s ){
    int maxi = 0;
    for(int p1=1;p1<s;p1++){
      for(int p2=p1;p2<s;p2++){
        int np1 = p1 * ( 100 + x ) / 100.0;
        int np2 = p2 * ( 100 + x ) / 100.0;
        if( np1 + np2 == s ) {
          np1 = p1 * ( 100 + y ) / 100.0;
          np2 = p2 * ( 100 + y ) / 100.0;
          maxi = max(maxi,np1+np2);
        }
      }
    }
    cout << maxi << endl;
  }
  return 0;
}