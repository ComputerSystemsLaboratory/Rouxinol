#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define int long long
#define MAX 2000006
#define NIL -1
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int h,A[MAX];
void maxheap(int i){
  int l=2*i;
  int r=2*i+1;
  int lgst;
  if(l<=h&&A[l]>A[i])lgst=l;
  else lgst=i;
  if(r<=h&&A[r]>A[lgst])lgst=r;
  if(lgst!=i){
    swap(A[i],A[lgst]);
    maxheap(lgst);
  }
}


signed main(){
  cin>>h;
  loop(i,1,h+1)cin>>A[i];
  for(int i=h/2;i>=1;i--)maxheap(i);
  loop(i,1,h+1)cout<<" "<<A[i];
  cout<<endl;

  return 0;
}