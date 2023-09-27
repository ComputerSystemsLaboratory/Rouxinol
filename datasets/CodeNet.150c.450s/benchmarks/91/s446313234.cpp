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

#define MAX_PRIME 1000000

vector<int> primes;

// sieve of Erastosthenes
inline void prime_list(){
  vector<bool> isPrime(MAX_PRIME+1, true);
  const int sz = MAX_PRIME;
  isPrime[0]=isPrime[1]=false;
  for(int i=4;i<=sz;i+=2) isPrime[i]=false;
  primes.pb(2);
  for(int i=3; i<=sz; i+=2){
    if(isPrime[i]){
      primes.pb(i);
      for(long j=(long)i*i; j<=sz; j+=i) isPrime[j]=false;
    }
  }
}

int main(){
  prime_list();
  int d;
  while(cin>>d){
    cout << upper_bound(all(primes), d) - primes.begin() << endl;
  }

  return 0;
}