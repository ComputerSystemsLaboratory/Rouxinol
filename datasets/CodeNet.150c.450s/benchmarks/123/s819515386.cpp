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
bool is_prime(int n){
      if(n<=1)return false;
      for(int i=2;i*i<=n;i++){
            if(n%i==0)return false;
      }
      return true;
}
int main(){
      int ans=0;
      int n,a;
      cin>>n;
      REP(i,n){
            cin>>a;
            if(is_prime(a))ans++;
      }
      cout<<ans<<endl;
}