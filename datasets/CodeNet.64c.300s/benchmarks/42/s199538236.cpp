#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pll;

#define reps(i,f,n) for(int i = int(f); i <= int(n); i++)
#define rep(i,n) reps(i,0,int(n)-1)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)

#define all(x) (x).begin(),(x).end()
#define X first
#define Y second

#define sz size()
#define eb emplace_back



int main(void){
  int n;
  while(cin >> n ){
    if(!n)break;
    int m, x, y;
    pii pos = pii(10,10);
    string S;
    int cell[32][32] = {0};
    rep(i,n){
      cin >> x >> y;
      cell[x][y] = 1;
    }
    cin >> m; 
    rep(i,m){
      cin >> S >> x;
      if(S[0] == 'N'){
        while(x--){
          pos.Y++;
          cell[pos.X][pos.Y] = 0;
        }
      }else if(S[0]=='E'){
        while(x--){
          pos.X++;
          cell[pos.X][pos.Y] = 0;
        }
      }else if(S[0] == 'S'){
        while(x--){
          pos.Y--;
          cell[pos.X][pos.Y] = 0;
        }
      }else if(S[0] == 'W'){
        while(x--){
          pos.X--;
          cell[pos.X][pos.Y] = 0;
        }
      }
    }
    bool flag = false;
    rep(i,32)rep(j,32)
      if(cell[i][j] != 0)
        flag |=true;

    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;
  }

  return 0;
}