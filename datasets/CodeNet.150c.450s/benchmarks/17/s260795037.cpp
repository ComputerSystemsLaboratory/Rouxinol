#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <cstring>
#include <cctype>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <complex>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const double PI = 3.141592653589793238462643383279502884L;
const int LARGE_PRIME = 1000000007;
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rtr(c, i) for(auto i = (c).rbegin(); i != (c).rend(); i++)
#define repfn(i,a,cont,next) \
  for(auto i = (a); [=](){return(cont);}(); i = [=](){return(next);}())
#define repby(i,a,b,s) repfn(i,a,i<b,i+s)
#define repab(i,a,b) repby(i,a,b,1)
#define rep(i,b) repab(i,0,b)
#define pb push_back
#define sz(c) int((c).size())

int main(int argc, char **argv)
{
  vi v;
  int tmp;

  rep (i, 5) {
    cin >> tmp;
    v.pb(tmp);
  }
  sort(rall(v));

  tr (v, i) {
    cout << *i;
    if (i+1!=v.end())
      cout << " ";
  }
  cout << endl;

  return 0;
}