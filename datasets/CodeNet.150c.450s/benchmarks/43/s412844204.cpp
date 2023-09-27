#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define REP(i,a,b) for((i)=(a);(i)<(int)(b);(i)++)
#define rep(i,n) REP(i,0,n)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int main(){
  int i,j,k,n;

  while(1){
    int ares = 0, bres = 0;
    cin >> n; if(n == 0) break;
    while(n--){
      int a, b;
      cin >> a >> b;
      if(a == b){ares += a; bres += b;}
      if(a > b) ares += (a + b);
      if(a < b) bres += (a + b);
    }
    cout << ares << " " << bres << endl;
  }

  return 0;
}