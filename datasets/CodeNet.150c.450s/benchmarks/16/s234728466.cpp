#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
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
#define debug(x) //cerr<< #x <<": "<<x<<endl
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

// cout vector
template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
    int len = v.size();
    for (int i = 0; i < len; ++i) {
        s << v[i]; if (i < len - 1) s << "\t";
    }
    return s;
}

// cout 2-dimentional vector
template<typename T> ostream& operator<<(ostream& s, const vector< vector<T> >& vv) {
    int len = vv.size();
    for (int i = 0; i < len; ++i) {
        s << vv[i] << endl;
    }
    return s;
}

int main() {
  string str;
  cin >> str;
  vi ground(str.length()+1);
  ground[0] = 0;
  rep(i, str.length()) {
    if (str[i] == '_') {
      ground[i+1] = ground[i];
    } else if (str[i] == '/') {
      ground[i+1] = ground[i] + 1;
    } else {
      ground[i+1] = ground[i] - 1;
    }
  }

  int A = 0;
  //vi L = {0};
  vi L;
  vi vpd(str.length()+1, 0);
  vi vp(str.length()+1, 0);
  vi st; // x coordinate
  rep(i, str.length()) {
    if ( str[i] == '\\' ) {
      st.pb(i);
    } else if ( str[i] == '/' && !st.empty() ) {
      vpd[st.back()] +=1;
      vpd[st.back()+1] += 1;
      vpd[i] += -1;
      vpd[i+1] += -1;
      debug(vpd);

      //L[L.size()-1] += ( i - st.back() );
      st.pop_back();
      //if ( st.empty() ) {
      //  A += L[L.size()-1];
      //  L.pb(0);
      //}
    }
  }

  rep(i, str.length()) {
    vp[i+1] = vp[i] + vpd[i];
    debug(vp);
  }

  int cond = 0; // 1: water
  FOR(i, 1, str.length()+1) {
    if (cond == 0 && vp[i] == 1) {
      L.pb(0);
    }
    if (vp[i] == 1) {
      cond = 1 - cond;
    }
    if (vp[i] != 0) {
      L.back() += vp[i];
    }
  }

  //if ( L[L.size()-1] == 0 ) {
  //  L.pop_back();
  //}

  rep(i, L.size()) {
    L[i] /= 2;
    A += L[i];
  }

  printf("%d\n", A);
  printf("%lu", L.size());
  rep(i, L.size()) {
    printf(" %d", L[i]);
  }
  printf("\n");

  return 0;
}