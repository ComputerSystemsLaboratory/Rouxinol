
#include <bits/stdc++.h>
using namespace std;

// syntax sugar: `for (int i = 0; i < N; ++i)`
#define rep(i, N) for (int i = 0; i < (int)(N); ++i)
#define rep2(i, startValue, N) for (int i = (int)(startValue); i < (int)(N); ++i)
// syntax sugar: `for (int i = 0; i < N; ++i)`
#define REP(type, name, beginValue, endCondValue) \
  for (type name = beginValue; name < endCondValue; ++name)
// syntax sugar: 多次元vector
#define VECTOR_DIM3(T, name, d1, d2, d3, initValue) \
    std::vector<std::vector<std::vector<T>>> name(d1, std::vector<std::vector<T>>(d2, std::vector<int>(d3, initValue)));
#define VECTOR_DIM2(T, name, d1, d2, initValue) \
    std::vector<std::vector<T>> name(d1, std::vector<T>(d2, initValue));
#define VECTOR_DIM1(T, name, d1, initValue) \
    std::vector<T> name(d1, initValue);
#define ll long long
#define ld long double


int main(){
  string s;
  cin >> s;

  int total = 0;
  deque<int> distances;
  deque<pair<int,int>> lakes; // d, area
  rep(i,s.length()) {
    const char& c = s[i];
    if (c == '\\') {
      distances.push_back(i);
    } else if (c == '/') {
      if (distances.empty()) {
        continue;
      }
      const int d = distances.back();
      distances.pop_back();
      total += i - d;
      int area = i - d;
      while(lakes.size() > 0 && lakes.back().first > d) {
        area += lakes.back().second;
        lakes.pop_back();
      }
      lakes.emplace_back(d, area);
    } else if (c == '_') {
      // noop
    }
  }

  cout << total << endl;
  cout << lakes.size();
  for(const auto& p: lakes) {
    cout << " ";
    cout << p.second;
  }
  cout << endl;

  return 0;
}

