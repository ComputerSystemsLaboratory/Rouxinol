#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1) {
    int n;
    cin>>n;
    if(!n)break;
    int cnt = 0;
    REP(i,n/2) {
      string s1,s2;
      cin>>s1>>s2;
      if (s1=="lu"&&s2=="ru") ++cnt;
      if (s1=="ru"&&s2=="lu") ++cnt;
      if (s1=="ld"&&s2=="rd") ++cnt;
      if (s1=="rd"&&s2=="ld") ++cnt;
    }
    if(n%2) {
      string s1;
      cin>>s1;
    }
    cout << cnt << endl;
  }
  return 0;
}