#include<iostream>
#define N 2000001
using namespace std;
int a[N],b[N],c[N],n;

void Csort(int k){
  for(int i=0;i<=k;i++)c[i]=0;

    for(int j=1;j<=n;j++)c[a[j]]++;
  
  for(int i=1;i<=k;i++)c[i]+=c[i-1];
  for(int j=n;j>0;j--) b[c[a[j]]]=a[j],c[a[j]]--;
}

int main(){
  cin>>n;
  int k=0;
  for(int i=1;i<=n;i++)cin>>a[i];
  for(int i=1;i<=n;i++)if(k<a[i])k=a[i];
  Csort(k);
  for(int i=1;i<n;i++)cout<<b[i]<<" ";
  cout<<b[n]<<endl;

  return 0;
}