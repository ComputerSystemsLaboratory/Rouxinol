#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N = 1 << 18;
struct BIT{
  int bit[MAX_N+1],n;
  //1-indexed
  BIT(){init();}
  BIT(int n):n(n){init();}
  void init(){
    memset(bit,0,sizeof(bit));
  }
  int sum(int i){
    int s=0;
    while(i>0){
      s+=bit[i];
      i-=i&-i;
    }
    return s;
  }
  void add(int i,int x){
    while(i<=n){
      bit[i]+=x;
      i+=i&-i;
    }
  }
  int sum0(int i){
    return sum(i+1);
  }
  void add0(int i,int x){
    add(i+1,x);
  }
};
signed main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int b[n];
  for(int i=0;i<n;i++) b[i]=a[i];
  sort(b,b+n);
  map<int,int> m;
  for(int i=0;i<n;i++) m[b[i]]=i+1;
  BIT bit(n);
  int ans=0;
  for(int i=0;i<n;i++){
    //cout<<i<<" "<<m[a[i]]<<endl;
    ans+=i-bit.sum(m[a[i]]);
    bit.add(m[a[i]],1);
  }
  cout<<ans<<endl;
  return 0;
}