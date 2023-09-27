#include <iostream>
#include <cassert>
#include <set>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
using namespace std;
int n;
set<int> list;
int main() {
  rep(i,28){
    cin >> n;
    list.insert(n);
  }
  REP(i,1,31)
    if(list.count(i)==0)
      cout << i << endl;
  return 0;
}