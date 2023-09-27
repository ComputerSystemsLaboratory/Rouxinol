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

vector<int> taro;
vector<int> hana;
int n,m,a;
int tarowa=0,hanawa=0;

int nextInt(
){int a; cin >> a; return a;}

int solve(){
  int exi,exj;
  int min = 100000;
  REP(i,m){
    REP(j,n){
      if(tarowa-taro[j]+hana[i] == hanawa -hana[i] + taro[j]){
	if(taro[j] + hana[i] < min){
	  min = taro[j] + hana[i];
	  exi = i;
	  exj = j;
	}
      }
    }
  }
  if(min != 100000)
    cout << taro[exj] << " " << hana[exi] << endl;
  else
    cout << -1 << endl;
  
  return 0;
}


int main(){
  while(true){
    cin >> n >> m;
    if(!n&&!m)break;

    taro.resize(n);
    hana.resize(m);
    
    REP(i,n){
      a=nextInt();
      taro[i] = a;
      tarowa += a;}
    REP(i,m){
      a=nextInt();
      hana[i] = a;
      hanawa += a;
    }
    
    solve();
    tarowa = 0;
    hanawa = 0;
    taro.clear();
    hana.clear();
  }
  return 0;
}