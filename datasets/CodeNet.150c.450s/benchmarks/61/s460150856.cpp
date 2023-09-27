#include <iostream>
using namespace std;

int main(){
  int n,a,b,c,x,f[10001],now,key[100],i;
  while(1){
    cin>>n>>a>>b>>c>>x;
    if(n==0)break;
    f[0]=x;
    for(i=1;i<=10000;i++)f[i]=(f[i-1]*a+b)%c;
    for(i=0;i<n;i++)cin >>key[i];
    now=0;
    for(i=0;i<=10000;i++){
      if(key[now]==f[i])now++;
      if(now>=n)break;
    }
    if(i==10001)cout << "-1"<<endl;
    else cout << i<<endl;
  }
  return 0;
}