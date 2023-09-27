#include<iostream>
#define N 1000000
using namespace std;

int a[N];
int partition(int p,int r){
  int t,x,i;
  x=a[r],i=p-1;
  for(int j=p;j<r;j++)if(a[j]<=x)i++,t=a[i],a[i]=a[j],a[j]=t;
  a[r]=a[i+1],a[i+1]=x;
  return i+1;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  int t=partition(0,n-1);
  for(int i=0;i<t;i++)cout<<a[i]<<" ";
  cout<<"["<<a[t]<<"] ";
  for(int i=t+1;i<n-1;i++)cout<<a[i]<<" ";
  cout<<a[n-1]<<endl;
  return 0;
}