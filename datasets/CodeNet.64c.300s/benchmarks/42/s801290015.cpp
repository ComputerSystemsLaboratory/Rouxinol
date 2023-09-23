#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int i;
  while(1){

    int N;
    cin >> N;
    if(N == 0) break;

    int XY[21][21]={0};
    int x, y;
    for(i=0; i<N; i++){
      cin >> x >> y;
      XY[x][y]=1;
    }

    int M;
    cin >> M;

    x=10;
    y=10;
    int cnt=0;
    string Direc;
    int Step;
    for(i=0; i<M; i++){
      cin >> Direc >> Step;
      if(Direc == "W"){
        REP(i, Step){
          x--;
          if(XY[x][y]==1){
            cnt++;
            XY[x][y]=0;
          }
        }
      }
      if(Direc == "E"){
        REP(i, Step){
          x++;
          if(XY[x][y]==1){
            cnt++;
            XY[x][y]=0;
          }
        }
      }
      if(Direc == "N"){
        REP(i, Step){
          y++;
          if(XY[x][y]==1){
            cnt++;
            XY[x][y]=0;
          }
        }
      }
      if(Direc == "S"){
        REP(i, Step){
          y--;
          if(XY[x][y]==1){
            cnt++;
            XY[x][y]=0;
          }
        }
      }
    }
    if(N == cnt) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
    return 0;
  }