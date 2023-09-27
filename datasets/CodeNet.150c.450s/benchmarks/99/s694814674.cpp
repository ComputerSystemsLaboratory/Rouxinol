
#include<iostream>
#include<map>
#include<cctype>
using namespace std;
int main()
{
  map<char,int> m;
  m['m']=1000;
  m['c']=100;
  m['x']=10;
  m['i']=1;
  int n,a,b,i;
  string s,t;
  cin>>n;
  while(cin>>s){
    a=0;
    for(i=0;i<s.size();i++){
      if(isalpha(s[i])){
	if(i-1>=0){
	  if(isdigit(s[i-1]))a+=(s[i-1]-'0')*m[s[i]];
	  else a+=m[s[i]];
	}else{
	  a+=m[s[i]];
	}
      }
    }
    cin>>s;
    for(i=0;i<s.size();i++){
      if(isalpha(s[i])){
	if(i-1>=0){
	  if(isdigit(s[i-1]))a+=(s[i-1]-'0')*m[s[i]];
	  else a+=m[s[i]];
	}else{
	  a+=m[s[i]];
	}
      }
    }
    b=0;
    while(a>=1000){b++;a-=1000;}
    if(b){
      if(b>1)cout<<b;
      cout<<"m";
    }
    b=0;
    while(a>=100){b++;a-=100;}
    if(b){
      if(b>1)cout<<b;
      cout<<"c";
    }
    b=0;
    while(a>=10){b++;a-=10;}
    if(b){
      if(b>1)cout<<b;
      cout<<"x";
    }
    b=0;
    while(a>=1){b++;a-=1;}
    if(b){
      if(b>1)cout<<b;
      cout<<"i";
    }
    cout<<endl;
  }
}