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
int n,p;
int c;
vector<int> ro;
bool decide = false;
int solve(){
  REP(a,100000000){
  REP(i,n){
    if(c){
      ro[i]++;
      c--;
      if(ro[i] == p){
	cout << i <<endl;
	decide = true;
	break;
      }

    }
    else{
      c +=ro[i];
      ro[i] = 0;
    }
  }
  if(decide) break;
  }
  return 0;
}

  
int main(){

  while(true){
    cin >> n >> p;
    if(n==0&&p==0)break;
    c = p;
    ro.resize(n,0);
    solve();
    ro.clear();
    decide = false;
    
  }
  return 0;
}