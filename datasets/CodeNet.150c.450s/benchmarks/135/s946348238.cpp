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
const ll INF=1e9;
int main(){
      int n,m;
      while(cin>>n>>m&&(n||m)){
            int a[n+1],b[m+1];
            vector<int> V1,V2;
            REP(i,n)cin>>a[i+1];
            REP(i,m)cin>>b[i+1];
            REP(i,n+1)if(i!=0)a[i]+=a[i-1];
            REP(i,m+1)if(i!=0)b[i]+=b[i-1];
            REP(i,n+1)REP(j,i)V1.PB(a[i]-a[j]);
            REP(i,m+1)REP(j,i)V2.PB(b[i]-b[j]);
            sort(ALL(V1));
            sort(ALL(V2));
            int ans=0;
            REP(i,V1.size()){
                  ans+=(upper_bound(ALL(V2),V1[i])-lower_bound(ALL(V2),V1[i]));
            }
            cout<<ans<<endl;
      }
}