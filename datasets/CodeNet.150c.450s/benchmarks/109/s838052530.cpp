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
const int INT_INF = 1LL << 30;

int tosec(string S){
  int h = stoi(S.substr(0, 2));
  int m = stoi(S.substr(3, 2));
  int s = stoi(S.substr(6, 2));
  return h * 3600 + m * 60 + s;
}

int main(){
while(true){
  int n;
  cin >> n;
  if(n == 0) break;
  map<int, int> ma;
  vector<P> imos(0);
  for(int i = 0; i < n; i++){
    string s1, s2;
    cin >> s1 >> s2;
    int start = tosec(s1), goal = tosec(s2);

    if(!ma.count(start)){
      ma[start] = imos.size();
      imos.push_back(P(start, 1));
    }
    else imos.at(ma.at(start)).second++;

    if(!ma.count(goal)){
      ma[goal] = imos.size();
      imos.push_back(P(goal, -1));
    }
    else imos.at(ma.at(goal)).second--;
  }

  sort(ALL(imos));
  
  int ans = 0;
  for(int i = 1; i < imos.size(); i++){
    imos.at(i).second += imos.at(i-1).second;
    chmax(ans, imos.at(i).second);
  }
  cout << ans << endl;
}
}
