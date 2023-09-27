#include<iostream>
#include<algorithm>
using namespace std;

void mg(pair<int,char> a[],int l,int m,int r){
  int n1=m-l,n2=r-m;
  pair<int,char> L[n1+1],R[n2+1];
  for(int i=0;i<n1;i++)L[i]=a[l+i];
  for(int i=0;i<n2;i++)R[i]=a[m+i];
  L[n1].first=1000000001,R[n2].first=1000000001;
  int i=0,j=0;
  for(int k=l;k<r;k++)L[i].first<=R[j].first?a[k]=L[i++]:a[k]=R[j++];
}

void mgs(pair<int,char> a[],int l,int r){
  if(l+1<r){
    int m=(l+r)/2;
    mgs(a,l,m);
    mgs(a,m,r);
    mg(a,l,m,r);
  }
}


int part(pair<int,char> a[],int p,int r){
  int x=a[r].first,i=p-1;
  for(int j=p;j<r;j++){
    if(a[j].first<=x){
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[r]);
  return i+1;
}

void quick(pair<int,char> a[],int p,int r){
  if(p<r){
    int q=part(a,p,r);
    quick(a,p,q-1);
    quick(a,q,r);
  }
}

int main(){
  int n;
  pair<int,char> a[100001],b[100001];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i].second>>a[i].first;
    b[i]=a[i];
  }

  quick(a,0,n-1);
  mgs(b,0,n);
  
  int cnt=0;
  for(int i=0;i<n;i++)if(a[i].second!=b[i].second)cnt++;
  cout<<(cnt?"Not stable":"Stable")<<endl;
  for(int i=0;i<n;i++)cout<<a[i].second<<" "<<a[i].first<<endl;
  return 0;
}