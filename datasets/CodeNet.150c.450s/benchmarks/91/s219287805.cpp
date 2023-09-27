#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

const int MAX_N = 1000000;
int n;
int ptr;
bool isPrime[MAX_N+1];
int prime[MAX_N];

int main()
{
  prime[ptr++] = 2;
  for(int i=2; i<=MAX_N; i*=2) isPrime[i] = true;
  for(int i=3; i<=MAX_N; i+=2){
    if(!isPrime[i]){
      prime[ptr++] = i;
      for(int j=2*i; j<=MAX_N; j+=i){
        isPrime[j] = true;
      }
    }
  }

  while(cin >> n){
    cout << (upper_bound(prime, prime+ptr, n) - prime) << endl;
  }

  return 0;
}