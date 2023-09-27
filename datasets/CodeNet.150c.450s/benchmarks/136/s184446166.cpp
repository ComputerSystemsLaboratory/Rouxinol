#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<((x))<<endl
#define fi first
#define se second

#define INF 2147483600

int main(){
  long a,b;
  while(cin>>a>>b){
    long g = __gcd(a,b);
    cout << g <<" "<< a/g*b << endl;
  }

  return 0;
}