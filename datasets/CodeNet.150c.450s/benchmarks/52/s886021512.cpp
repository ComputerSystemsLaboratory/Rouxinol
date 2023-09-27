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

int main(int argc, char **argv)
{
  stack<int> s;
  int tmp;
  while (cin >> tmp) {
    if (tmp)
      s.push(tmp);
    else {
      cout << s.top() << endl;
      s.pop();
    }
  }
  return 0;
}