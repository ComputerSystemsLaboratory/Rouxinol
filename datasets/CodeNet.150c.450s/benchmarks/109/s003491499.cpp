#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;

int atooi(char s){
  string n="0123456789";
  for(int i=0;i<=10;i++){
    if(s==n[i]){
      return i;
    }
  }
  return 0;
}

int timetime(string s){
  int hh,mm,ss,st,ft,h1,h2,m1,m2,s1,s2;
  h1= atooi(s[0]);
  h2= atooi(s[1]);
  m1= atooi(s[3]);
  m2= atooi(s[4]);
  s1= atooi(s[6]);
  s2= atooi(s[7]);
  hh=h1*10+h2;
  mm=m1*10+m2;
  ss=s1*10+s2;
  st=hh*3600+mm*60+ss;
  return st;
}

int main(){
  while(true){
  int n,st,ft;
  cin>>n;
  if(n==0) return 0;
  int  tm[100000]={};
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    st =timetime(s);
    tm[st]+=1;
   cin>>s;
   ft=timetime(s);
    tm[ft]-=1;
  }

  int val=0,ans=0;
  for(int i=0;i<=89899;i++){
    tm[i]+=val;
    val=tm[i];
    ans=max(ans,tm[i]);
  }
  cout<<ans<<endl;
}
}