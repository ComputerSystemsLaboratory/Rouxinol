#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
int main(void)
{
  
  for(;;){
    int n;
    cin >> n;
    if(!n) return 0;
    char dic[256];
    REP(i,256) dic[i]=(char)i;
    REP(i,n){
      char a,b;
      cin >> a >> b;
      dic[a]=b;
    }
    int m;
    cin >> m;
    REP(i,m){
      char tmp;
      cin >> tmp;
      cout << dic[tmp];
    }
    cout << endl;
      
  }
}