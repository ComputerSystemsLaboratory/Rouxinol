#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int (i) = 0; (i) < (n); ++(i))
#define REPR(i, n) for(int (i) = (n); (i) >= 0; --(i))
#define FOR(i, n, m) for(int (i) = (n); (i) < (m); ++(i))

// constexpr int INF = 1e9;
constexpr ll INF = 1LL<<61;
constexpr ll mod = 1e9+7;

class xorShift{
    uint32_t x, y, z, w;
    static const double TO_DOUBLE;
public:
    xorShift(){
        x = 123456789;
        y = 362436069;
        z = 521288629;
        w = 88675123; 
    }
    xorShift(uint32_t seed){
        x = seed = 1812433253u * (seed ^ (seed >> 30));
        y = seed = 1812433253u * (seed ^ (seed >> 30)) + 1;
        z = seed = 1812433253u * (seed ^ (seed >> 30)) + 2;
        w = seed = 1812433253u * (seed ^ (seed >> 30)) + 3;
    }
    uint32_t nextInt(uint32_t n){
        uint32_t t = x ^ (x << 11);
        x = y; y = z; z = w;
        w = (w ^ (w >> 19)) ^ (t ^ (t >> 8));
        return w % n;
    }
    uint32_t nextInt(){
        uint32_t t = x ^ (x << 11);
        x = y; y = z; z = w;
        return w = (w ^ (w >> 19)) ^ (t ^ (t >> 8));
    }
    double nextDouble(){
        return nextInt() * TO_DOUBLE;
    }
};
const double xorShift::TO_DOUBLE = 1.0 / (1LL << 32);

class Timer{
    chrono::time_point<chrono::system_clock>start;
public:
    Timer(){
        start = chrono::system_clock::now();
    }
    double duration(){
        return chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now()- start).count();
        //return chrono::duration<chrono::milliseconds>(chrono::system_clock::now()- start).count();
    }
};

Timer T;
xorShift rnd;
constexpr double TIME_LIMIT = 1900;

int D = 365;
vector<int> c(26);
vector<vector<int>> s(D, vector<int>(26));

struct Ans{
    vector<int> ans;
    int score;
    Ans(): score(0), ans(D){}

};

int cal_score(Ans& ans){
    int manzoku = 0;
    vector<int> last(26, 0);
    REP(i, D){
        manzoku += s[i][ans.ans[i]];
        last[ans.ans[i]]=i+1;
        REP(j, 26){
            manzoku -= c[j]*(i+1- last[j]);
        }
        cout << manzoku << endl;
    }
    return manzoku;
}
struct solver{
    Ans bestAns;
    solver(){
        
    }
};
int main(){
  cin >> D;
  REP(i, 26){
      cin >> c[i];
  }
  REP(i, D){
      REP(j, 26){
          cin >> s[i][j];
      }
  }
  Ans ans;
  REP(i, D){
      cin >> ans.ans[i];
      ans.ans[i]--;
  }
  cal_score(ans);
  return 0;
}
