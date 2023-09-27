#include<iostream>
using namespace std;
int n,r,a,b;
int t[100];
int u[100],size;
int main(){
  while(cin>>n>>r&&n&&r){
    for(int i=0;i<n;i++)t[i]=n-i;
    for(int i=0;i<r;i++){
      cin>>a>>b;
      for(int j=0;j<b;j++)u[j]=t[j+a-1];
      for(int j=a-2;j>=0;j--)t[j+b]=t[j];
      for(int j=0;j<b;j++)t[j]=u[j];
    }
    cout<<t[0]<<endl;
  }
  return 0;
}