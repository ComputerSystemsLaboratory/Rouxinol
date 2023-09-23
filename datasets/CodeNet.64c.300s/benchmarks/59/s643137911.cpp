#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    for(int j=2;j*j<=m;j++)
      if(m%j==0){
	count++;
	break;
      }
  }
  cout<<n-count<<endl;
  return 0;
}