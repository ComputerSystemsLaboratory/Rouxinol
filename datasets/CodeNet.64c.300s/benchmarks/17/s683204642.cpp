#include <bits/stdc++.h>
using namespace std;

int cala(int x,int s){return (s*100+99+x)/(x+100);}
int calb(int x,int s){return s*(x+100)/100;}

int main(){
  int x,y,s,p,q,smax;
  while(cin>>x>>y>>s && (x||y||s)){
    smax=-1;
    p=1;q=s-1;
    while(p<=q){
      int t=cala(x,p),u=cala(x,q);
      if(calb(x,t)+calb(x,u)<=s)
        smax=max(calb(y,t)+calb(y,u),smax);
      p++,q--;
    }
    cout<<smax<<endl;
  }
  return 0;
}