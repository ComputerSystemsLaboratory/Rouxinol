#include<bits/stdc++.h>
using namespace std;
int p[1000001];
int main(){
  p[0]=p[1]=1;
  for(int i=2;i*i<=1000001;++i){
    if(!p[i]){
      for(int j=i+i;j<=1000001;j+=i) p[j]=1;
    }
  }
  int a,d,n;
  while(cin>>a>>d>>n,a){
    int cnt=0;
    for(int i=a;;i+=d){
      if(!p[i]) cnt++;
      if(cnt==n){
	cout<<i<<endl;
	break;
      }
    }
  }
  return 0;
}