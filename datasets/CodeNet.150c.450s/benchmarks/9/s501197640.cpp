#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<(int)(n);i++)
#define FORR(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define ZERO(a) memset(a,0,sizeof(a))
using namespace std;
typedef signed long long ll;

void solve(){
 string s;
 int n,h;
 while(1){
  cin>>s;
  if(s=="-") break;
  cin>>n;
  FOR(i,n){
   cin>>h;
   s=s.substr(h,s.length()-h)+s.substr(0,h);
  }
  cout<<s<<endl;
 }
}

int main(){
 solve();
 return 0;
}