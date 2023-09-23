#include<bits/stdc++.h>
using namespace std;
long ans=0;
void calc(int x,int y){
  if(y+2==x) {
    ans++;}
  if(y+3==x){
    ans++;}
  if(y+1==x) {
    ans++;
    return;
  }
  if(y>x) return;
  calc(x,y+1);
  calc(x,y+2);
  calc(x,y+3);
}
  
int main(){
  int a;
  while(1){
    ans=0;
    cin>>a;
    if(a==0) break;
    int c=0,b=0;
    calc(a,0);
    b=ans;
    while(1){
      if(b<=3650){
	c++;
	break;
      }
      c++;
      b-=3650;
    }
    cout<<c<<endl;
  }
  return 0;
}

