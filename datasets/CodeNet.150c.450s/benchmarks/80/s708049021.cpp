#include <iostream>
#include <cassert>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define MAX 10000
int sumA=0,sumB=0;
int a[4],b[4];
using namespace std;
int main() {
  rep(i,4) cin >> a[i];
  rep(i,4) cin >> b[i];
  rep(i,4) sumA += a[i];
  rep(i,4) sumB += b[i];
  if(sumB>sumA){
    cout << sumB << endl;
  }else{
    cout << sumA << endl;
  }
  return 0;
}