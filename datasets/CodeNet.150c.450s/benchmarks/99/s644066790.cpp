#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
string IntToString(int number)
{
  stringstream ss;
  ss << number;
  return ss.str();
}
int mcxi2int(string s){
  int res=0;
  int i,tmp;
  tmp=1;
  for(i=0;i<s.length();i++){
    if(s[i]-'0'<10&&s[i]-'0'>0){
      tmp=s[i]-'0';
    }
    else{
      if(s[i]=='m') res+=tmp*1000;
      if(s[i]=='c') res+=tmp*100;
      if(s[i]=='x') res+=tmp*10;
      if(s[i]=='i') res+=tmp;
      tmp=1;
    }
  }
  return res;
}
string int2mcxi(int n){
  string s;
  if(n/1000){
    if(n/1000==1) s="m";
    else s=IntToString(n/1000)+"m";
    n-=1000*(n/1000);
  }
  if(n/100){
    if(n/100==1) s+="c";
    else s+=IntToString(n/100)+"c";
    n-=100*(n/100);
  }
  if(n/10){
    if(n/10==1) s+="x";
    else s+=IntToString(n/10)+"x";
    n-=10*(n/10);
  }
  if(n){
    if(n==1) s+="i";
    else s+=IntToString(n)+"i";
  }
  return s;
}
int main(void){
  int n,i;
  string a,b;
  cin>>n;
  
  for(i=0;i<n;i++){
    cin>>a>>b;
    cout<<int2mcxi(mcxi2int(a)+mcxi2int(b))<<endl;
  }
  
  
  return 0;
}