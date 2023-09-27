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
  int n;
  unordered_map<int, int> mp;
  while(cin >> n){
    mp[n]++;
  }
  int maxi = -1;
  for(auto itr = mp.begin(); itr != mp.end(); ++itr){
    maxi = max(maxi, itr->second);
  }
  vector<int> vec;
  for(auto itr = mp.begin(); itr != mp.end(); ++itr){
    if(maxi == itr->second)vec.pb(itr->first);
  }
  sort(vec.begin(), vec.end());
  rep(i, vec.size()){
    cout << vec[i] << endl;
  }
	return 0;
}

