#include<bits/stdc++.h>
using namespace std;
struct Dice{
  int a[6];
  void D(char c){
    int b;
    if(c=='E')
      b=a[0], a[0]=a[3], a[3]=a[5], a[5]=a[2], a[2]=b;
    else if(c=='W')
      b=a[0], a[0]=a[2], a[2]=a[5], a[5]=a[3], a[3]=b;
    else if(c=='S')
      b=a[0], a[0]=a[4], a[4]=a[5], a[5]=a[1], a[1]=b;
    else
      b=a[1], a[1]=a[2], a[2]=a[4], a[4]=a[3], a[3]=b;
  }
};
int main(){
  Dice d;
  for(int i=0;i<6;++i) cin>>d.a[i];
  int n; cin>>n;
  while(n--){
    int a,b; cin>>a>>b;
    if(d.a[3]==a) d.D('E');
    if(d.a[2]==a) d.D('W');
    while(d.a[0]!=a) d.D('S');
    while(d.a[1]!=b) d.D('X');
    cout<<d.a[2]<<endl;
  }
  return 0;
}