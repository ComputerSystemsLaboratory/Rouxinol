#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF=pow(2,31)-1;

std::vector<int> v(1e6,0);
int N=1;
int sum(int a,int b,int k,int l,int r){
  if(r<=a||b<=l)return 0;
  if(a<=l&&r<=b)return v[k];
  else{
    int vl=sum(a,b,k*2+1,l,(l+r)/2);
    int vr=sum(a,b,k*2+2,(l+r)/2,r);
    return (vl+vr);
  }
}
void update(int a,int b){
  int k=a+N-1;
  v[k]+=b;
  while(k){
    k=(k-1)/2;
    v[k]=(v[k*2+1]+v[k*2+2]);
  }
}

signed main(){
  int n,M;
  cin>>n>>M;
  while(n>N)N*=2;
  std::vector<int> ans;

  for(int i=0;i<M;i++){
    int t,l,r;cin>>t>>l>>r;l--;
    if(t)ans.push_back(sum(l,r,0,0,N));
    else update(l,r);
  }
  for(int p:ans)cout<<p<<endl;
}

