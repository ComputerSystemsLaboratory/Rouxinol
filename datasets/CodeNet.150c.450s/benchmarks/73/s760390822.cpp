#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF=pow(2,31)-1;

std::vector<int> v(1e6,0);
int N=1;
int sum(int i){
  int s=0;
  while(i){
    s+=v[i];
    i-=i&-i;
  }
  return s;
}
void add(int i,int a){
  while(i<=N){
    v[i]+=a;
    i+=i&-i;
  }
}

signed main(){
  int n,M;
  cin>>n>>M;
  while(n>N)N*=2;
  std::vector<int> ans;

  for(int i=0;i<M;i++){
    int t,l,r;cin>>t>>l>>r;
    if(t)ans.push_back(sum(r)-sum(l-1));
    else add(l,r);
  }
  for(int p:ans)cout<<p<<endl;
}

