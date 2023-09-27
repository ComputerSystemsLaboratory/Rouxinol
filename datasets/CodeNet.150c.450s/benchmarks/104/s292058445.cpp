#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int w,n,b,c;
  cin>>w>>n;
  int a[w];
  for(int i=0;i<w;i++){
    a[i]=i+1;
  }
  for(int i=0;i<n;i++){
    scanf("%d,%d",&b,&c);
    int temp=a[b-1];
    a[b-1]=a[c-1];
    a[c-1]=temp;
  }
  for(int j=0;j<w;j++)cout<<a[j]<<endl;
}