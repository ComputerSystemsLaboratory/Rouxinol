#include <bits/stdc++.h>
#define FOR(i,n) for(int i=0;i<(int)(n);i++)
#define FORR(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
using namespace std;
typedef long long ll;

void solve(){
 char c;
 int cnt[26]={};
 while(cin>>c){
  c=tolower(c);
  cnt[c-'a']++;
 }
 FOR(i,26){
  char cc='a'+i;
  cout<<cc<<" : "<<cnt[i]<<endl;
 }
}

int main(){
 solve();
 return 0;
}