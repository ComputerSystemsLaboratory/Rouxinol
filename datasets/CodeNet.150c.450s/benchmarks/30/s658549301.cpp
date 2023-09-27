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
      int n,a[100],ans=0;
      cin>>n;
      REP(i,n)cin>>a[i];
      for(int i=0;i<n;i++){
            int minj=i;
            for(int j=i;j<n;j++){
                  if(a[j]<a[minj]){
                        minj=j;
                  }
            }
            if(a[i]!=a[minj]){
                  swap(a[i],a[minj]);
                  ans++;
            }
      }
      REP(i,n){
            cout<<a[i];
            if(i==n-1)cout<<endl;
            else cout<<" ";
      }
      cout<<ans<<endl;
}