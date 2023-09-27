#include<iostream>
#include<cstdio>
using namespace std;

void swap(int a[],int x,int y){
  int t=a[x];
  a[x]=a[y];
  a[y]=t;
  return;
}

int main(){
  int a[100]={};
  int n,w;
  cin>>w>>n;
  for(int i=1;i<=w;i++){
    a[i]=i;
  }
  for(int i=0;i<n;i++){
    int e,f;
    scanf("%d,%d",&e,&f);
    swap(a,e,f);
  }
  for(int i=1;i<=w;i++){
    cout<<a[i]<<endl;
  }
}