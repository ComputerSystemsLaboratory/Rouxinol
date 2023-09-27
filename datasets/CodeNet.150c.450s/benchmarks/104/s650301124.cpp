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
  int w, n;
  cin >> w >> n;
  vector<int> vec = vector<int>(w, 0);
  rep(i, w){
    vec[i] = i;
  }
  rep(i, n){
    string s;
    cin >> s;
    int a, b;
    rep(j, s.size()){
      if(s[j] == ','){
        a = stoi(s.substr(0, j));
        b = stoi(s.substr(j+1, -1));
        break;
      }
    }
    a--; b--;
    swap(vec[a], vec[b]);
  }
  rep(i, w){
    cout << vec[i] + 1 << endl;
  }
	return 0;
}

