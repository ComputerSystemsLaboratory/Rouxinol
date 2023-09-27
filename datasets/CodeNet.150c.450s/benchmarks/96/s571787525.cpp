#if 1
  #include <bits/stdc++.h>
#else
  #include "../../bits/stdc++.h"
#endif

#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define REP(i,n) FOR(i,0,(n))
#define RREP(i,n) RFOR(i,0,(n))

using namespace std;

typedef pair<int, int> P;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second

char w[9][5] = {
  {'.', ',', '!', '?', ' '},
  {'a', 'b', 'c', ' ', ' '},
  {'d', 'e', 'f', ' ', ' '},
  {'g', 'h', 'i', ' ', ' '},
  {'j', 'k', 'l', ' ', ' '},
  {'m', 'n', 'o', ' ', ' '},
  {'p', 'q', 'r', 's', ' '},
  {'t', 'u', 'v', ' ', ' '},
  {'w', 'x', 'y', 'z', ' '}
};

int n;
char c[1030];
int t;
P s[80];
char o[80];
int l;

void input(){
  cin>>c;
  l = strlen(c);
  REP(i, 80)s[i] = mp(0, 0);
}

void solve(){
  t=0;

  REP(i, l) {
    if(c[i]=='0') {
      if(s[t].ft==0)continue;
      else t++;
    }else {
      if(s[t].ft==0)s[t].ft=c[i]-'0';
      else s[t].sd++;
    }
  }

  REP(i, t) {
    s[i].ft--;
    o[i] = w[s[i].ft][s[i].sd%(s[i].ft==0?5:(s[i].ft==6||s[i].ft==8?4:3))];
  }
  o[t] = '\0';
  cout<<o<<endl;
}

int main(){
  cin.tie(0);
  
  cin>>n;
  REP(i, n) {
    input();
    solve();
  }
  
  return 0;
}