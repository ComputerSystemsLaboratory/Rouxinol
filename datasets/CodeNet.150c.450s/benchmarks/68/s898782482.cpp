#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  int N;
  while(cin>>N,N!=0){
    vector<int> a(N);
    for (int i=0;i<N;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int ans=INF;
    for (int i=0;i<N-1;i++) {
      ans=min(ans,a[i+1]-a[i]);
    }
    cout<<ans<<endl;
  }
}


