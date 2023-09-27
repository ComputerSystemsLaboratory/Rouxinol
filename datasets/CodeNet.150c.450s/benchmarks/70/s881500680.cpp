#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int vec[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  int m,d,c;
  while(cin>>m>>d){
    if(m==0) break;
    c=0;
    if(m!=1) rep(i,m-1) c+=vec[i];
    c+=d;
    if(c%7==1) cout<<"Thursday"<<endl;
    else if(c%7==2) cout<<"Friday"<<endl;
    else if(c%7==3) cout<<"Saturday"<<endl;
    else if(c%7==4) cout<<"Sunday"<<endl;
    else if(c%7==5) cout<<"Monday"<<endl;
    else if(c%7==6) cout<<"Tuesday"<<endl;
    else if(c%7==0) cout<<"Wednesday"<<endl;
  }
      
  return 0;
}
