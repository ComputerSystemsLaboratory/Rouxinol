#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int w;
  int n;
  int a;
  int b;
  int a1;
  int b1;
  int c[50]={0};
  int i,j;
  char x;

  cin>>w>>n;
  for(i=1;i<=w;i++){
    c[i]=i;
  }
  for(i=1;i<=n;i++){
    cin>>a>>x>>b;
    swap(c[a],c[b]);
  }
  for(i=1;i<=w;i++){
    cout<<c[i]<<endl;
  }

  return 0;
}
  
  
  
  