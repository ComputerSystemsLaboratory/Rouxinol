#include <bits/stdc++.h>

/**
 * @docs input_vector.md
 */
template <typename T>
std::vector<T> input_vector(int N){
  std::vector<T> ret(N);
  for(int i = 0; i < N; ++i) std::cin >> ret[i];
  return ret;
}

template <typename T>
std::vector<std::vector<T>> input_vector(int N, int M){
  std::vector<std::vector<T>> ret(N);
  for(int i = 0; i < N; ++i) ret[i] = input_vector<T>(M);
  return ret;
}


#ifdef DEBUG
#include <Mylib/Debug/debug.cpp>
#else
#define dump(...)
#endif

namespace solver{
  constexpr int CONTEST = 26;
  
  int score(int D, std::vector<int> c, std::vector<std::vector<int>> s, std::vector<int> t){
    for(auto &x : t) x--;
    
    int ret = 0;
    std::vector<int> last(CONTEST, -1);

    for(int i = 0; i < D; ++i){
      ret += s[i][t[i]];
      last[t[i]] = i;

      for(int j = 0; j < CONTEST; ++j){
        ret -= c[j] * (i - last[j]);
      }

      std::cout << ret << "\n";
    }

    return ret;
  }
  
  void solve(){
    int D; std::cin >> D;
    auto c = input_vector<int>(CONTEST);
    auto s = input_vector<int>(D, CONTEST);
    auto t = input_vector<int>(D);

    score(D, c, s, t);
  }
}

int main(){
  solver::solve();
  return 0;
}
