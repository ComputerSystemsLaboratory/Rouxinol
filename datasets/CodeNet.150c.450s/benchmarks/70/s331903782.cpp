#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

signed main(){
  int M[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
  string S[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
  int m,d;
  while(cin>>m>>d,m){
    int index=M[m-1]+d;
    cout<<S[index%7]<<endl;
  }
  return 0;
}