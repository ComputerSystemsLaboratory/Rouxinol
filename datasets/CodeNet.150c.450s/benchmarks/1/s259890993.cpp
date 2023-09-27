#include<bits/stdc++.h>
using namespace std;
#define MAX_N 1000100
int n,dat[2*(MAX_N)-1];

void init(int n_){
  n=1;
  while(n<n_)n*=2;
  for(int i=0;i<2*n-1;i++)dat[i]=0;
}

void update(int k,int a){
  k+=n-1;
  dat[k]=a;
  while(k>0){
    k=(k-1)/2;
    dat[k]=max(dat[k*2+1],dat[k*2+2]);
  }
}

//[a,b)
int query(int a,int b,int k=0,int l=0,int r=n){
  if(r<=a||b<=l)return 0;
  if(a<=l&&r<=b)return dat[k];
  else{
    int vl=query(a,b,k*2+1,l,(l+r)/2);
    int vr=query(a,b,k*2+2,(l+r)/2,r);
    return max(vl,vr);
  }
}



int main(){
  cin>>n;
  int tn=n;
  vector<int> a(100010),b;
  for(int i=0;i<n;i++){
    cin>>a[i];
    b.push_back(a[i]);
  }
  sort(b.begin(),b.end());
  for(int i=0;i<n;i++){
    a[i]=lower_bound(b.begin(),b.end(),a[i])-b.begin();
  }
  init(n);
  for(int i=0;i<tn;i++){
    int t=query(0,a[i]);
    if(dat[a[i]+n-1]>=t+1)continue;
    update(a[i],t+1);
  }
  cout<<query(0,tn)<<endl;
}

