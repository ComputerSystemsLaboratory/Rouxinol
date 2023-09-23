#include <iostream>
#include <cassert>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
int ansA,ansB;
int n;
int a,b;
using namespace std;
int main() {
  while(1){
    cin >> n;
    if(n==0) return 0;
    ansA = 0;
    ansB = 0;
    rep(i,n){
      cin >> a;
      cin >> b;
      if(a>b){
        ansA += a+b;
      }else if(b>a){
        ansB += a+b;
      }else{
        ansA += a;
        ansB += b;
      }
    }

    cout << ansA << " " << ansB << endl;
  }
  return 0;
}