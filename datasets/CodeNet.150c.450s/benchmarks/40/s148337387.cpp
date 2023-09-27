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
      b=a[0], a[0]=a[1], a[1]=a[5], a[5]=a[4], a[4]=b;
  }
};
int main(){
  Dice d;
  for(int i=0;i<6;++i) cin>>d.a[i];
  string s; cin>>s;
  for(int i=0;i<s.size();++i) d.D(s[i]);
  cout<<d.a[0]<<endl;
  return 0;
}