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
  int n,m,p,sum;
  int x[1000];
  while(cin>>n&&cin>>m&&cin>>p){
    if(!n&&!m&&!p)break;
    sum = 0;
    REP(i,n){
      x[i] = nextInt();
      sum +=x[i];
    }
    if(!x[m-1]){cout << 0 << endl;continue;}
    cout << sum*(100-p)/(x[m-1]) << endl;
  }
  return 0;
}