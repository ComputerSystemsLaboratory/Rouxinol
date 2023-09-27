#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <sys/time.h>
 
using namespace std;
 
struct Timer {
  struct timeval start, cur;
  double limit;
	
  Timer() : limit(0) { gettimeofday(&start, NULL); }
  Timer(double l) : limit(l) { gettimeofday(&start, NULL); }
	
  bool isLimit() { return curTime() > limit; }
	
  double curTime() {
    gettimeofday(&cur, NULL);
    return (cur.tv_sec - start.tv_sec) + (cur.tv_usec - start.tv_usec) / 1e6;
  }
};
 
struct XorShift {
  unsigned int x, y, z, w;
 
  XorShift() { init(); }
  XorShift(unsigned int seed) { init(seed); }
 
  void init(unsigned int seed = 88675123) { x = 123456789; y = 362436069; z = 521288629; w = seed; }
 
  void setNext() {
    unsigned int t = x ^ (x << 11);
    x = y; y = z; z = w;
    w = (w ^ (w >> 19)) ^ (t ^ (t >> 8));
  }
  
  unsigned int nextUInt() { setNext(); return w; }
  unsigned int nextUInt(unsigned int n) { return nextUInt() % n; }
  double nextDouble() { return nextUInt() * (1.0 / 0xFFFFFFFFu); }
};
 
XorShift rnd(283);
double T = 10000.0;
double COLD = 0.95;
 
bool next(long long diff) {
  if (diff >= 0) return true;
  else return rnd.nextDouble() < exp(diff / T);
}

int D;
int c[26];
vector<vector<int>> s;
vector<int> ans;
 
 
// 初期解を生成
void generate_answer() {

  // 全部 0 にする
  /*
  for (int i = 0; i < D; i++) {
    ans[i] = 0;
  }
  */

  // for problem B
  for (int i = 0; i < D; i++) {
    cin >> ans[i];
    ans[i]--;
  }
}
 
// 答えを出力
void output_answer() {
  for (int i = 0; i < D; i++) {
    cout << ans[i] + 1 << endl;
  }
}
 
 
int getScore() {
  
  // 愚直にシミュレーションして得点計算
  // O(N * L + M * M)
  vector<int> last(26, 0);
  int score = 0;
  for (int i = 0; i < D; i++) {
    score += s[i][ans[i]];
    last[ans[i]] = i + 1;
    for (int j = 0; j < 26; j++) {
      score -= c[j] * (i + 1 - last[j]);
    }
    cout << score << endl;
  }

  return max(0, score + 1000000);
}
 
void yamanobori() {

  /*
  
  Timer timer(283);
  while(timer.curTime() < 2.9) {
    size_t i = rnd.nextUInt() % 27 + 1;
    size_t j = rnd.nextUInt() % 27 + 1;
    char before = ans[i][j];
    char after = panels[rnd.nextUInt() % 2];
    int beforeScore = getScore();
    ans[i][j] = after;
    int afterScore = getScore();
 
    // 得点が上がらないなら戻す
    if(afterScore < beforeScore) ans[i][j] = before;
    // cerr << beforeScore << endl;
  }
  */
}
 
void yakinamashi() {
  
  /*
  Timer timer(283);
  while(timer.curTime() < 2.9) {
    size_t i = rnd.nextUInt() % 27 + 1;
    size_t j = rnd.nextUInt() % 27 + 1;
    char before = ans[i][j];
    char after = panels[rnd.nextUInt() % 2];
    int beforeScore = getScore();
    ans[i][j] = after;
    int afterScore = getScore();
 
    if(next(afterScore - beforeScore)) ans[i][j] = after;
    else                               ans[i][j] = before;
    T *= COLD;
    // cerr << T << " " << beforeScore << endl;
  }
  */
}
 
int main() {
  
  // 入力受け取り
  cin >> D;
  for (int i = 0; i < 26; i++) {
    cin >> c[i];
  }

  s.resize(D);
  ans.resize(D);
  for (int i = 0; i < D; i++) {
    s[i].resize(26);
  }
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
    
  // 初期解を生成
  generate_answer();

  getScore();
  
  // 時間いっぱい改善
  // yakinamashi();
  // yamanobori();
 
  // 出力
  // output_answer();
 
  return 0;
}
