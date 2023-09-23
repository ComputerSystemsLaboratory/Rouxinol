#include<iostream>
using namespace std;

int main(){

  int n, y, m, d;

  cin>>n;

  for(n;n;n--){
    cin>>y>>m>>d;
    int ans=0;
    for(int i=y+1;i<1000;i++){
      if(i%3==0) ans+=20*10;
      else ans+=(20+19)*5;
    }
    if(y%3==0) ans+=20*(10-m);
    else{
      for(int i=m+1;i<=10;i++){
	if(i%2) ans+=20;
	else ans+=19;
      }
    }
    if(y%3==0) ans+=20-d;
    else{
      if(m%2) ans+=20-d;
      else ans+=19-d;
    }

    cout<<ans+1<<endl;
  }
  
  return 0;
}