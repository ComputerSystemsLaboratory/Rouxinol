#include<iostream>
#include<string>

using namespace std;

struct dice{
  int u,n,e,s,w,d;
};

int main(){

  dice d;
  int tmp;
  string s;

  cin>>d.u>>d.s>>d.e>>d.w>>d.n>>d.d;
  cin>>s;

  for(int i=0;i<s.size();i++){
    if(s[i]=='N'){
      tmp=d.u;
      d.u=d.s;
      d.s=d.d;
      d.d=d.n;
      d.n=tmp;
    }
    else if(s[i]=='E'){
      tmp=d.u;
      d.u=d.w;
      d.w=d.d;
      d.d=d.e;
      d.e=tmp;
    }
    else if(s[i]=='S'){
      tmp=d.u;
      d.u=d.n;
      d.n=d.d;
      d.d=d.s;
      d.s=tmp;
    }
    else if(s[i]=='W'){
      tmp=d.u;
      d.u=d.e;
      d.e=d.d;
      d.d=d.w;
      d.w=tmp;
    }
  }
  cout<<d.u<<endl;
}