#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int n,p;
  while(cin>>n>>p,n+p) {
    int i=0;
    int wan = p;
    vector<int> a(n);
    
    while(true) {
//      cout << i << " " << a[i] << " "<<wan << endl;
      if (wan) {
        wan--;
        a[i]++;
        if (wan==0&&a[i]==p)
          break;
      } else {
        wan = a[i];
        a[i]=0;
      }
      i++;
      if (i>=n) i=0;
    }
    cout << i << endl;
  }
}