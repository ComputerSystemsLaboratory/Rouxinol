
#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <cmath>
#include <string>
#include <sstream>
#include <queue> 
#include <list>
#include <stack>
#include <unordered_map>
#include <algorithm> 
#include <numeric>  
#include <functional>
#include <cassert>
#include <bitset>
#include <cctype>  
#include <iomanip> 
#include <limits>  
#include <regex>
#include <random>
// std::numeric_limits<int>::max(), min()
// std::setprecision(X)
// std::islower(), std::isupper(), std::tolower, std::toupper
// std::accumulate(m.begin(), m.end(), 0LL);
// std::sort(begin(),end()) // 0, 1, 2, 3 ,4 (default, less);
// std::priority_queue<int, vector<int>, less<int>> que; // 4, 3, 2, 1 (defualt, less) : 
// if ( std::regex_match(S, std::regex("(dream|dreamer|erase|eraser)*")) ) std::cout << "YES" << std::endl;

#define rep(i,n)  for(int i = 0; i < (int)(n);    i++)
#define sz(x)     ((int)(x).size())
#define all(x)    (x).begin(),(x).end()

using ll = long long;

ll gcd ( ll a, ll b ) { if ( b == 0 ) return a; else return gcd ( b, a%b ); }
ll lcm ( ll a, ll b ) { return a * b / gcd(a, b); }

class AtcoderContestSchedule {
  public:
    int D;
    std::array<int,26> c;
    std::vector<std::array<int,26>> s;

    explicit AtcoderContestSchedule(void) {
      std::cin >> D;  s.resize(D);
      rep(i,26) std::cin >> c[i];
      rep(i,D) rep(j,26) std::cin >> s[i][j];
    }

    int Score( const std::vector<int> &d ) {
      int S = 0;
      std::vector<int> last(26, 0);
      rep(i, sz(d)) {
        S += s[i][d[i]-1];
        last[d[i]-1] = i+1;
        rep(j,26) S -= c[j] * ( (i+1) - last[j] );
        std::cout << S << std::endl;
      }
      return std::max<int>(1e6+S, 0);
    }

    void Print() {
      std::random_device rnd;
      std::mt19937 mt(rnd());
      std::uniform_int_distribution<int> rand(1, 26);
      rep(i,365) std::cout << rand(mt) << std::endl;
      return;
    }
};

int main (void) {
  std::cin.tie(0);  std::ios::sync_with_stdio(false);
  AtcoderContestSchedule sub;
  std::vector<int> t(sub.D);
  rep(i,sub.D) std::cin >> t[i];
  sub.Score(t);
  return 0;
}

