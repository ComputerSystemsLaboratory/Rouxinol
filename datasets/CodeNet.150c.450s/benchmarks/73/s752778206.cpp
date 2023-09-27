#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define show(x) cout<<#x<<"="<<x<<"\n"
using namespace std;

int n,q;

struct SegmentTree{
 int size;
 vector<int> data;
 const int inf=(1LL<<31)-1;
 SegmentTree(int n){
  size=1;
  while(size<n){
   size<<=1;
  }
  data.resize(2*size-1,0);
 }
 void update(int k,int x){
  k+=size-1;
  data[k]+=x;
  while(k>0){
   k=(k-1)/2;
   data[k]=data[k*2+1]+data[k*2+2];
  }
 }
 int query(int a,int b,int k,int l,int r){
  if(r<=a || b<=l)return 0;
  if(a<=l && r<=b)return data[k];
  return query(a,b,k*2+1,l,(r+l)/2)+query(a,b,k*2+2,(r+l)/2,r);
 }
 int query(int a,int b){
  return query(a,b,0,0,size);
 }
};

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout<<fixed;
#ifdef LOCAL_DEFINE
    freopen("in", "r", stdin); 
    freopen("out","w",stdout);
#endif
 cin>>n>>q;
 SegmentTree rsq(n);
 for(int i=0;i<q;i++){
  int a,b,c;cin>>a>>b>>c;
  if(a){
   cout<<rsq.query(b-1,c)<<"\n";
  }else{
   rsq.update(b-1,c);
  }
 }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
  return 0;
}