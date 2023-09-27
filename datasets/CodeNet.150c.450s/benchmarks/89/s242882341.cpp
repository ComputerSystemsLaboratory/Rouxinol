#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,d,n,cnt;
  bool b;
  while(1){
    cin>>a>>d>>n;
    if(a==0 && d==0 && n==0) break;
    cnt=0;
    while(cnt!=n){
      b=true;
      if(a<2 || a%2==0) b=false;
      if(a==2) b=true;
      for(int i=3;i<=sqrt(a);i++){
	if(a%i==0){
	  b=false;
	  break;
	}
      }
      if(b) cnt++;
      a+=d;
    }
    cout<<a-d<<endl;
  }
  return 0;
}

