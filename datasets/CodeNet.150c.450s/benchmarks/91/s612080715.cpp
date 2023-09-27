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
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
const double PI = 3.141592653589793238462643383279502884L;
const int LARGE_INT = 1000000007;
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

int check(vector<bool> &v, int from, int to)
{
  int i;
  for (i = from + 1; i*i <= to && i*i < sz(v); i++) {
    if (v[i]) {
      for (int j = 2; i*j < sz(v); j++) {
        v[i*j] = false;
      }
    }
  }
  return i - 1;
}

int count(vector<bool> &v, int to)
{
  int res = 0;
  repab (i, 2, to+1) {
    if (i >= sz(v))
      break;
    if (v[i])
      res++;
  }
  return res;
}

int main(int argc, char **argv)
{
  const int prime_max=1000000;
  vector<bool> v(prime_max, true);
  int done;

  int n;
  done = 1;
  while (cin >> n) {
    done = check(v, done, n);
    cout << count(v, n) << endl;
  }
  return 0;
}