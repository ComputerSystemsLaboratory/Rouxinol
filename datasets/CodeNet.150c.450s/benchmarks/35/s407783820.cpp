#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for(i=0;i<n;++i)
#define each(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); itr++)
#define mp make_pair
#define pb push_back
#define fi first
#define sc second

int main(int argc, char const *argv[]) {
  int i,j;

  while(1){
    int n;
    cin >>n;
    if(n==0) break;

    std::vector<long> a(n+1);
    rep(i,n) scanf(" %ld", &a[i+1]);

    std::vector<long> sum(n+1); //a[1]~a[i]??????
    sum[0]=0;
    for(i=1; i<=n; ++i) sum[i]=sum[i-1]+a[i];

    long ans=-5000*100000-1;
    for(i=1; i<=n; ++i){
      for(j=i; j<=n; ++j){
        ans=max(ans,sum[j]-sum[i-1]);
      }
    }

    std::cout << ans << std::endl;
  }
  return 0;
}