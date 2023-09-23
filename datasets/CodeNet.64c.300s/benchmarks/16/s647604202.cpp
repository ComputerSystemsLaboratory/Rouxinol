#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const int INF=1e9;
int main(){
      int ans=-INF;
      int n,a,mi;
      cin>>n;
      REP(i,n){
            cin>>a;
            if(i==0){
                  mi=a;
                  continue;
            }
            ans=max(ans,a-mi);
            mi=min(a,mi);
      }
      cout<<ans<<endl;
}