#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr<< #x <<": "<<x<<endl
#define debug2(x,y) cerr<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;
typedef deque<int> di;
typedef deque<deque<int> > ddi;

int main() {
  stack<int> st;
  string str;
  while (cin >> str) {
    if (str == "+" || str == "-" || str == "*") {
      int right = st.top();
      st.pop();
      int left = st.top();
      st.pop();
      switch (str[0]) {
        case '+': {
          st.push(left+right);
          break;
        }
        case '-': {
          st.push(left-right);
          break;
        }
        case '*': {
          st.push(left*right);
          break;
        }
      }
      continue;
    } else {
      st.push(atoi(str.c_str()));
    }
  }
  printf("%d\n", st.top());

  return 0;
}