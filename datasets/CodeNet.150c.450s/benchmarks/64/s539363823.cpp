#include<iostream>
using namespace std;
int n,a[20],q,m,h[2222]={};

void s(int i=0,int sum=0){
  if(i==n){
    h[sum]=1;
    return;
  }
  s(i+1,sum+a[i]),s(i+1,sum);
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  cin>>q,s();
  for(int i=0;i<q;i++){
    cin>>m;
    cout<<(h[m]?"yes\n":"no\n");
  }
  return 0;
}