// includes
#include <cstdio>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <functional>
#include <cmath>
#include <climits>
#include <bitset>

// macros
#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a); i<(b);++i)
#define rep(i, n) FOR(i, 0, n)

using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;

// solve

int main(int argc, char const* argv[])
{
  string s;
  unordered_map<string, int> mp;
  int maxi = -1;
  string res = "";
  while(cin >> s){
    mp[s]++;
    if(maxi < int(s.size())){
      maxi = s.size();
      res = s;
    }
  }
  int maxi2 = -1;
  string res2 = "";
  for(auto itr = mp.begin(); itr != mp.end(); ++itr){
    if(maxi2 < itr->second){
      maxi2 = itr->second;
      res2 = itr->first;
    }
  }
  cout << res2 << " " << res << endl;
	return 0;
}

