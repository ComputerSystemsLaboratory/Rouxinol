#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using ll = long long;
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) < (b)) ? (b) : (a))

int const nmax = 200;
ll v[1 + nmax];

class IndependentSet{
private:
  std::vector<std::pair<ll,int>> v;
public:
  ll reduce(ll number) {
    for(int i = 0; i < v.size(); i++)
      if(0 < ((1LL<<v[i].second) & number))
        number ^= v[i].first;
    return number;
  }
  void _insert(ll number) {
    number = reduce(number);
    if(0 < number) 
      v.push_back({number, __builtin_ctzll(number)});
  }
};

int solve() {
  int n;
  std::cin >> n;
  for(int i = 1; i <= n; i++)
    std::cin >> v[i];
  std::string s;
  std::cin >> s;
  s = "#" + s;
  IndependentSet myset;
  for(int i = n; 1 <= i; i--) {
    if(s[i] == '0')
      myset._insert(v[i]);
    else {
      if(0 < myset.reduce(v[i]))
        return 1;
    }
  }
  return 0;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int t;
  std::cin >> t;
  for(int testcase = 1; testcase <= t; testcase++)
    std::cout << solve() << '\n';
  return 0;
}
