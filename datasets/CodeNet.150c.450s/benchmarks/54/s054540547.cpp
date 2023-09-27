#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<(int)(n);i++)
#define FORR(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define ZERO(a) memset(a,0,sizeof(a))
using namespace std;
typedef signed long long ll;

void solve(){
 int cnt=0;
 string w,s;
 cin>>w;
 FOR(i,w.size())
  w[i]=tolower(w[i]);
 while(1){
  cin>>s;
  if(s=="END_OF_TEXT") break;
  FOR(i,s.size())
   s[i]=tolower(s[i]);
  if(s==w) cnt++;
 }
 cout<<cnt<<endl;
}

int main(){
 solve();
 return 0;
}