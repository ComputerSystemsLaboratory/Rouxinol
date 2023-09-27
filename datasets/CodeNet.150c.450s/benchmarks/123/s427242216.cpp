#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,N,ans=0;
  bool b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>N;
    b=true;
    if(N<2 || N%2==0) b=false;
    if(N==2) b=true;
    for(int j=3;j<=sqrt(N);j++){
      if(N%j==0){
	b=false;
	break;
      }
    }
    if(b) ans++;
  }
  cout<<ans<<endl;
  return 0;
}

