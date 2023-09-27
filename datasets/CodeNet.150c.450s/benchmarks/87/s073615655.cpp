#include <bits/stdc++.h>
#define ALL(a)  (a).begin(),(a).end()
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<long long, long long> Pll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
template <typename T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template <typename T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;

int main(){
vll result(0);
while(true){
  int H;
  cin >> H;
  if(H == 0) break;

  vvi a(H, vi(5, 0));
  for(int i = 0; i < H; i++){
    for(int j = 0; j < 5; j++){
      cin >> a.at(i).at(j);
    }
  }
  bool repflag;
  ll res = 0;
  do{
    vector<vector<bool>> flag(H, vector<bool>(5, false));
    repflag = false;

    for(int i = 0; i < H; i++){
      for(int j = 0; j <= 2; j++){
        if(a.at(i).at(j) != 0 && a.at(i).at(j) == a.at(i).at(j+1) && a.at(i).at(j) == a.at(i).at(j+2)){
          repflag = true;
          flag.at(i).at(j) = true; flag.at(i).at(j+1) = true; flag.at(i).at(j+2) = true;
        }
      }
    }

    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++){
        if(flag.at(i).at(j)){
          res += a.at(i).at(j);
          a.at(i).at(j) = 0;
        }
      }
    }

    for(int i = H-1; i >= 1; i--){
      for(int j = 0; j < 5; j++){
        if(a.at(i).at(j) == 0){
          for(int k = i-1; k >= 0; k--){
            if(a.at(k).at(j) != 0){
              a.at(i).at(j) = a.at(k).at(j);
              a.at(k).at(j) = 0;
              break;
            }
          }
        }
      }
    }


  }while(repflag);
  result.push_back(res);
}

for(auto x: result) cout << x << endl;

}
