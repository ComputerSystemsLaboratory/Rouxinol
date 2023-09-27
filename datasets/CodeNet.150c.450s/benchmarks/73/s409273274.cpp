#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int n;
int bit[100010];
void init(int n_){
  n=n_;
  for(int i=0;i<=n;i++){
    bit[i]=0;
  }
}
void update(int a,int w){
  for(int x=a;x<=n;x+=x&-x){
    bit[x]+=w;
  }
}
int query(int a){
  int s=0;
  for(int x=a;x>0;x-=x&-x){
    s+=bit[x];
  }
  return s;
}
int main(){
  int n,q,i;
  cin >> n >> q;
  init(n);
  int a,b,c;
  for(i=0;i<q;i++){
    cin >> a >> b >> c;
    if(a==0){
      update(b,c);
    }
    else{
      cout << query(c)-query(b-1) << endl;
    }
  }
}
