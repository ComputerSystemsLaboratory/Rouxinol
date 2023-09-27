#include<iostream>
#define INF 1000000006
#define N 5000001
using namespace std;
int n,cnt;
int a[N],L[N],R[N];
void merge(int l,int m,int r){
  int n1=m-l,n2=r-m;
  for(int i=0;i<n1;i++) L[i]=a[l+i];
  for(int i=0;i<n2;i++)R[i]=a[m+i];
  L[n1]=INF,R[n2]=INF;
  int i=0,j=0;
  for(int k=l;k<r;k++){
    if(L[i]<R[j]){
      a[k]=L[i],i++;
    }else {
      a[k]=R[j],j++;
    }
    cnt++;
  }
}

void msort(int l,int r){
  int m;
  if(l+1<r){
 m=(l+r)/2;
  msort(l,m);
  msort(m,r);
  merge(l,m,r);
  }
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  msort(0,n);
  for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
  cout<<a[n-1]<<endl<<cnt<<endl;
  return 0;
}