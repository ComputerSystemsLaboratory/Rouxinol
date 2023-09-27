#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  int n;
  int R,L,D,c;
  string s;
  while(cin>>n){
    if(!n)break;
    R=0;
    L=0;
    D=1;
    c=0;
    while(n--){
      cin >> s;
      if(s=="lu")L++;
      if(s=="ld")L--;
      if(s=="ru")R++;
      if(s=="rd")R--;
      if(L&&R&&D){
	c++;
	D--;
      }else if(!L&&!R&&!D){
	c++;
	D++;
      }
    }
    cout << c << endl;
  }

  return 0;
}