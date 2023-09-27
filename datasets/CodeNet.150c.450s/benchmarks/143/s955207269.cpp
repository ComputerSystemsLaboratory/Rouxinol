#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <limits>
using namespace std;
using ll = long long;

int main(){
  ll N;
  cin >> N;
  map<ll,ll> map;
  ll sum=0;
  for(ll i=0;i<N;i++){
    ll a;
    cin >> a;
    map[a]++;
    sum+=a;
  }
  ll Q;
  cin >> Q;
  for(ll i=0;i<Q;i++){
    ll b,c;
    cin >> b >> c;
    map[c]+=map[b];
    sum+=c*map[b];
    sum-=b*map[b];
    map[b]=0;
    cout << sum << endl;
  }
}