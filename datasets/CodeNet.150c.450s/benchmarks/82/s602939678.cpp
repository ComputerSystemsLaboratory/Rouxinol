#include <bits/stdc++.h>
using namespace std;

struct Dice{
  int n1,n2,n3,n4,n5,n6;
  Dice(int n1, int n2, int n3, int n4, int n5, int n6)
    :n1(n1), n2(n2), n3(n3), n4(n4), n5(n5), n6(n6) {}

  void N(){
    swap(n1,n2);swap(n2,n6);swap(n6,n5);
  }
  void S(){
    swap(n1,n5);swap(n5,n6);swap(n6,n2);
  }
  void E(){
    swap(n1,n4);swap(n4,n6);swap(n6,n3);
  }
  void W(){
    swap(n1,n3);swap(n3,n6);swap(n6,n4);
  }

  int funcf(int f, int a, int b, int c, int d){
    if(f==a)return b;
    if(f==b)return c;
    if(f==c)return d;
    if(f==d)return a;
    return 0;
  }

  int ansRight(int u, int f){
    if(u==n1)return funcf(f,n2,n3,n5,n4);
    if(u==n2)return funcf(f,n1,n4,n6,n3);
    if(u==n3)return funcf(f,n1,n2,n6,n5);
    if(u==n4)return funcf(f,n1,n5,n6,n2);
    if(u==n5)return funcf(f,n1,n3,n6,n4);
    if(u==n6)return funcf(f,n2,n4,n5,n3);
    return 0;
  }
};

template<class H>
void CIN(H& h){
  cin>>h;
}
template<class H, class... T>
void CIN(H &h, T&... t){
  cin>>h;
  CIN(t...);
}

int main(){
  int a,b,c,d,e,f;
  //cin>>a>>b>>c>>d>>e>>f;
  CIN(a,b,c,d,e,f);
  Dice dice(a,b,c,d,e,f);

  int n;cin>>n;
  for(int i=0; i<n; i++){
    int p,q;CIN(p,q);
    cout<<dice.ansRight(p,q)<<endl;
  }
}
