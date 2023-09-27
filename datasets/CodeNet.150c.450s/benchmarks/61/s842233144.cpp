#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,x,y,i,t;
  while(cin>>n>>a>>b>>c>>x&&n){
    i=t=0;
    for(;i<n;i++,t++){
      cin>>y;
      while(y!=x&&t<=10000){x=(a*x+b)%c;t++;}
      x=(a*x+b)%c;
    }
    if(--t>10000)cout<<-1<<endl;
    else cout<<t<<endl;
  }
}