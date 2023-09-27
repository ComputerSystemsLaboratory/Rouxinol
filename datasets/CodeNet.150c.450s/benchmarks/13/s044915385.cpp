#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<(int)(n);i++)
#define FORR(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define ZERO(a) memset(a,0,sizeof(a))
using namespace std;
typedef signed long long ll;

void solve(){
 string s,p;
 cin>>s>>p;
 s=s+s;
 FOR(i,s.length()-p.length()){
  if(s.substr(i,p.length())==p){
   cout<<"Yes"<<endl;
   return;
  }
 }
 cout<<"No"<<endl;
}

int main(){
 solve();
 return 0;
}