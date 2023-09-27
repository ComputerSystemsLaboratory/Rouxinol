#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int D;
  cin>>D;
  
  int C[27];
  int S[366][27];
  int last[366][27];

  for(int d=1;d<=26;d++) cin>>C[d];
  for(int d=1;d<=D;d++){
    for(int i=1;i<=26;i++) cin>>S[d][i];
  }

  int ans=0;
  int t;
  for(int d=1;d<=D;d++){
    cin>>t;
    
    for(int i=1;i<=26;i++) last[d][i]=last[d-1][i];
    last[d][t]=d;
    
    for(int i=1;i<=26;i++) ans-=C[i]*(d-last[d][i]);
    
    ans+=S[d][t];

    cout<<ans<<endl;
  }

  return 0;
}