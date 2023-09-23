#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

bool Is_Prime(int n){
  if(n==1) return false;
  else if(n==2)return true;
  else if(n%2==0)return false;

  for(int i=3;i*i<=n;i+=2){
    if(n%i==0)return false;
  }
  return true;
}

signed main(){
  int a,d,n;
  while(cin>>a>>d>>n,a){
    int p=0;int tmp;
    for(int i=0;;i++){
      tmp=a+i*d;
      if(Is_Prime(tmp))p++;
      if(p==n){
        cout<<tmp<<endl;
        break;
      }
    }
  }
  return 0;
}

