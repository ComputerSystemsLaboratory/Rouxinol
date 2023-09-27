#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<(int)(n);i++)
#define FORR(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define ZERO(a) memset(a,0,sizeof(a))
using namespace std;
typedef signed long long ll;

void solve(){
 string s,t;
 int n,a=0,b=0;
 cin>>n;
 while(n--){
  cin>>s>>t;
  if(s<t) b+=3;
  else if(s>t) a+=3;
  else{
   a++;
   b++;
  }
 }
 cout<<a<<" "<<b<<endl;
}

int main(){
 solve();
 return 0;
}