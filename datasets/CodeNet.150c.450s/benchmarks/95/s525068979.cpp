#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main(){
  int n;
  while( cin >> n, n ){
    string s;
    int cnt = 0;
    bool L = false , R = false, phase = false;
    rep(_,n){
      cin >> s;
      if( s[0] == 'l' ) L = !L;
      else              R = !R;
      if( !phase && ( L && R ) ) {
        ++cnt;
        phase = !phase;
      } else if( phase && ( !L && !R ) ) {
        ++cnt;
        phase = !phase;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}