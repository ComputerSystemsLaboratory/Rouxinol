#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long ll;

ll N,K;
ll a[100005];

int main(){
  while(scanf("%lld%lld", &N,&K) && N||K){
    for(int i=0;i<N;i++) scanf("%lld", &a[i]);
    ll sum = 0, res;
    for(ll i=0;i<K;i++) sum += a[i];
    res = sum;
    for(ll i=K;i<N;i++){
      sum -= a[i-K];
      sum += a[i];
      res = max(res, sum);
    }
    printf("%lld\n", res);
  }
  return 0;
}