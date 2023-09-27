#include<bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;
const int MAX_N = 200000;
int N,BIT[MAX_N+1] = {};//1-indexed
void add(int i,int x){
  while(i <= N){
    BIT[i] += x;
    i += i&(-i);
  }
}
int sum(int i){
  int s = 0;
  while(i){
    s += BIT[i];
    i -= i&(-i);
  }
  return s;
}
int main(){
  int i;scanf("%d",&N);
  int a[N];vector<int> v;
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    v.emplace_back(a[i]);
  }
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  for(i=0;i<N;i++) a[i] = lower_bound(v.begin(),v.end(),a[i])-v.begin()+1;
  ll ans = 0;
  for(i=0;i<N;i++){
    ans += i-sum(a[i]);
    add(a[i],1);
  }
  printf("%lld\n",ans);
}
