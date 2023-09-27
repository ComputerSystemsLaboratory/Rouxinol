#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int f(string s){
  int i;
  int n=0;
  int ln=s.length();
  for(i=0;i<ln;i++){
    if('2'<=s[i]&&s[i]<='9'){
      if(0){
      }else if(s[i+1]=='m'){
	n+=(s[i]-'0')*1000;
      }else if(s[i+1]=='c'){
	n+=(s[i]-'0')*100;
      }else if(s[i+1]=='x'){
	n+=(s[i]-'0')*10;
      }else if(s[i+1]=='i'){
	n+=s[i]-'0';
      }
      i++;
    }else{
      if(0){
      }else if(s[i]=='m'){
	n+=1000;
      }else if(s[i]=='c'){
	n+=100;
      }else if(s[i]=='x'){
	n+=10;
      }else if(s[i]=='i'){
	n+=1;
      }
    }
  }
  return n;
}
string g(int n){
  string s;
  s="";
  if(0){
  }else if(n/1000==0){
  }else if(n/1000==1){
    s+='m';
  }else{
    s+=(char)('0'+n/1000);
    s+='m';
  }
  if(0){
  }else if(n%1000/100==0){
  }else if(n%1000/100==1){
    s+='c';
  }else{
    s+=(char)('0'+n%1000/100);
    s+='c';
  }
  if(0){
  }else if(n%100/10==0){
  }else if(n%100/10==1){
    s+='x';
  }else{
    s+=(char)('0'+n%100/10);
    s+='x';
  }
  if(0){
  }else if(n%10==0){
  }else if(n%10==1){
    s+='i';
  }else{
    s+=(char)('0'+n%10);
    s+='i';
  }
  return s;
}
int main(){
  int i;
  int n;
  string t,u;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>t>>u;
    cout<<g(f(t)+f(u))<<endl;
  }
  return 0;
}