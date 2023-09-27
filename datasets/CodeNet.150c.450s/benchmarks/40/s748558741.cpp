#include<bits/stdc++.h>
using namespace std;

struct dice{
  int u;
  int s;
  int e;
  int w;
  int n;
  int d;
};

int main(){
  dice dice1;
  cin>>dice1.u>>dice1.s>>dice1.e>>dice1.w>>dice1.n>>dice1.d;
  char c;
  while(scanf("%c",&c)!=EOF){
    dice temp = dice1;
    if(c=='E'){     
      dice1.d = temp.e;
      dice1.w = temp.d;
      dice1.u = temp.w;
      dice1.e = temp.u;
    }else if(c=='N'){
      dice1.n = temp.u;
      dice1.u = temp.s;
      dice1.s = temp.d;
      dice1.d = temp.n;
    }else if(c=='S'){
      dice1.n = temp.d;
      dice1.u = temp.n;
      dice1.s = temp.u;
      dice1.d = temp.s;
    }else if(c=='W'){
      dice1.u = temp.e;
      dice1.w = temp.u;
      dice1.d = temp.w;
      dice1.e = temp.d;
    }
  }
  cout<<dice1.u<<endl;
}

