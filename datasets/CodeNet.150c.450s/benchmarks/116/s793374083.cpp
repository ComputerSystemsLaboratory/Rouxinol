#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define INF (1<<29)
using namespace std;
typedef long long ll;
int main(){
      int n,k;
      int a[100000];
      while(cin>>n>>k&&n&&k){
            REP(i,n)cin>>a[i];
            int sum=0;
            REP(i,k)sum+=a[i];
            int ans=sum;
            REP(i,n-k){
                  sum=sum+a[i+k]-a[i];
                  ans=max(ans,sum);
            }
            cout<<ans<<endl;
      }
}