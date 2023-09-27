#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(a) max((a),-(a))
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define repe(i,n) rep(i,(n)+1)
#define per(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define pere(i,n) rep(i,(n)+1)
#define all(x) (x).begin(),(x).end()
#define SP <<" "<<
#define RET return 0
#define MOD 1000000007
#define INF 1000000000000000000

typedef long long LL;
typedef long double LD;

int sol(string s){
  int vs=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='m'){
      if(i==0) vs+=1000;
      else if('0'<=s[i-1]&&s[i-1]<='9') vs+=(s[i-1]-'0')*1000;
      else vs+=1000;
    }
    if(s[i]=='c'){
      if(i==0) vs+=100;
      else if('0'<=s[i-1]&&s[i-1]<='9') vs+=(s[i-1]-'0')*100;
      else vs+=100;
    }
    if(s[i]=='x'){
      if(i==0) vs+=10;
      else if('0'<=s[i-1]&&s[i-1]<='9') vs+=(s[i-1]-'0')*10;
      else vs+=10;
    }
    if(s[i]=='i'){
      if(i==0) vs+=1;
      else if('0'<=s[i-1]&&s[i-1]<='9') vs+=(s[i-1]-'0');
      else vs+=1;
    }
  }
  return vs;
}

int main(){
  int q;
  cin >> q;
  string s,tt;
  string ans;
  int vs,vt;
  for(int t=0;t<q;t++){
    cin >> s >> tt;
    vs=sol(s);
    vt=sol(tt);
    // cout << vs SP vt << endl;
    vs+=vt;
    ans="";
    // cout << vs << endl;
    if(vs/1000>0){
      if(vs/1000>1){
        ans+=string(1,(vs/1000)+'0');
      }
      ans+="m";
    }
    vs%=1000;
    if(vs/100>0){
      if(vs/100>1){
        ans+=string(1,(vs/100)+'0');
      }
      ans+="c";
    }
    vs%=100;
    if(vs/10>0){
      if(vs/10>1){
        ans+=string(1,(vs/10)+'0');
      }
      ans+="x";
    }
    vs%=10;
    if(vs>0){
      if(vs>1){
        ans+=string(1,(vs)+'0');
      }
      ans+="i";
    }
    cout << ans << endl;
  }
  return 0;
}

