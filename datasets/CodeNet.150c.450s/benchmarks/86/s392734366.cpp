#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,p,x;
  int a[100];
  int sum;
  while(1){
    cin>>n>>m>>p;
    if(n==0 && m==0 && p==0) break;
    sum=0;
    for(int i=0;i<100;i++){
      a[i]=0;
    }
    for(int i=0;i<n;i++){
      cin>>x;
      a[i]=x;
      sum+=x;
    }
    if(a[m-1]!=0){
      sum=sum*(100-p);
      cout<<sum/a[m-1]<<endl;
    }
    else cout<<0<<endl;
  }
  return 0;
}
