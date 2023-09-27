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

int nextInt(){int a;cin>>a;return a;}
int main(){
  int n,a,b,c,x,ct;
  vector<int> y;
  while(cin>>n >> a >> b >> c >> x){
    if(!n&&!a&&!b&&!c&&!x)break;
    y.resize(n);
    REP(i,n)y[i] = nextInt();
    ct=0;
    int i;
    if(a==0 && n>1){cout << -1 << endl;continue;}
    for(i=0;i<10001;i++){
	if(y[ct] == x){
	  ct++;
	}
      if(ct==n)break;
      x = (a * x + b)%c;
    }
    if(ct==n) cout << i << endl;
    else cout << -1 << endl;

    y.clear();
  }

  return 0;
}