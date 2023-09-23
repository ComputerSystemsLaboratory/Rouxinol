#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#define FOR(i, a, b)  for(int i=a; i<b; ++i)
#define rFOR(i, a, b) for(int i=a-1; i>=b; --i)
#define REP(i, n) for(int i=0; i<n; ++i)
#define rREP(i, n) for(int i=n-1; i>=0; --i)
#define all(a)  a.begin(), a.end()
#define DEVIDENUM 998244353
using namespace std;

int main(){
  int n;
  while(true){
    cin >> n;
    if(n==0)  break;
    int ans = 0;
    FOR(i, 1, n){
      int sum=0;
      FOR(j, i, n){
        sum += j;
        if(sum==n){
          ans++;
          break;
        }else if(sum>n){
          break;
        }else{
          continue;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
