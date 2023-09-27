#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> a(300000,0);
int n,si;
void update(int,int);
long long find(int,int,int,int,int);

int main(){
  int q,f;
  si=1;
  cin >> n >> q;
  for(int i=0;;i++){
    si*=2;
    if(si>=n+1)break;
  }

  for(int i=0;i<q;i++){
    cin >> f;
    if(f==0){
      int po,d;
      cin >> po >> d;
      update(po,d);
    }
    else{
      int st,go;
      long long sum;
      cin >> st >> go;
      sum=find(st,go+1,0,0,si);
      cout << sum << endl;
    }
  }
  return 0;
}
void update(int p,int d){
  int ko;
  ko=si-1+p;
  a[ko]+=d;
  while(ko>0){
    ko=(ko-1)/2;
    a[ko]+=d;
  }
}
long long find(int s,int t,int k,int l,int r){
  int m=(l+r)/2;
  if(s<=l&&r<=t){
    return a[k];
  }
  else if(r<=s||t<=l)return 0;
  
  return find(s,t,k*2+1,l,m)+find(s,t,k*2+2,m,r);
}