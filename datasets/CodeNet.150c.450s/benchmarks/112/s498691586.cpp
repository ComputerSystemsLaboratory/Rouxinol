#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

bool exist[128];

int main(){
  int N,M,i;
  map<char,char> mp;

  for(;;){
    scanf("%d\n",&N);
    if(N == 0) break;
    mp.clear();
    rep(i,1<<7) exist[i] = false;

    rep(i,N){
      char a,b;
      scanf("%c %c\n",&a,&b);
      exist[a] = true;
      mp[a] = b;
    }

    scanf("%d\n",&M);
    string res;
    rep(i,M){
      char a;
      scanf("%c\n",&a);
      if(exist[a]) res += mp[a];
      else res += a;
    }

    cout << res << endl;
  }

  return 0;
}