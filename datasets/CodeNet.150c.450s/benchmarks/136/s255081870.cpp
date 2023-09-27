#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <complex>
#include <iterator>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;

#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rtr(c, i) for(auto i = (c).rbegin(); i != (c).rend(); i++)
#define repfn(i, a, cont, next) \
  for(auto i = (a); [=](){return(cont);}(); i = [=](){return(next);}())
#define repby(i, a, b, step) repfn(i, a, i < b, i + step)
#define repab(i, a, b) repby(i, (a), (b), 1)
#define rep(i, n) repab(i, 0, (n))
#define pb push_back
#define sz(c) int((c).size())

int gcd_h(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd_h(b, a % b);
}

int gcd(int a, int b) {
  if (a < b)
    return gcd_h(b, a);
  else
    return gcd_h(a, b);
}

int lcm(int a, int b) {
  int g = gcd(a, b);
  if (g) {
    return (a / g) * b;
  } else {
    return 0;
  }
}

int main(int argc, char **argv)
{
  int a, b;
  while (cin >> a >> b) {
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
  }
  return 0;
}