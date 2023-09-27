#include<cmath>
#include<iostream>
#include <bits/stdc++.h>
#define REP(i,s,n) for(int i=0;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;
using ld = long double;

int main(){
  int a,b,c,d;
  int e,f,g,h;
  int a_ans, b_ans;
  while(cin>>a>>b>>c>>d, cin>>e>>f>>g>>h){
    // cout<<a<<b<<c<<d<<e<<f<<g<<h;
    a_ans=0;b_ans=0;
    if(a==e)a_ans+=1;
    else if(a==f|a==g|a==h)b_ans+=1;
    if(b==f)a_ans+=1;
    else if(b==e|b==g|b==h)b_ans+=1;
    if(c==g)a_ans+=1;
    else if(c==f|c==e|c==h)b_ans+=1;
    if(d==h)a_ans+=1;
    else if(d==f|d==g|d==e)b_ans+=1;
    cout << a_ans << " " << b_ans<<endl;
  }
}

