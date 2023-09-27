#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int main() {  
  string s;
  cin >> s;

  int n = s.size();
  stack<int> st;
  int sum = 0;
  vector<int> rs(n+1, -1);
  for ( int i = 0; i < n; i++ ) {
    if ( s[i] == '\\' ) {
      st.push(i);
    } else if ( s[i] == '/' && st.size() ) {
      int p = st.top(); st.pop();
      sum += i-p;
      rs[p] = i;
    }
  }

  vector<int> pools;
  int sum2 = 0;
  int l = 0, r = 0;
  for ( int i = 0; i < n; i++ ) {
    if ( rs[i] == -1 ) continue;
    if ( rs[i] < r ) sum2 += rs[i]-i;
    else {
      if ( sum2 ) pools.push_back(sum2);
      sum2 = rs[i]-i;
      l = i; r = rs[i];
    }
  }

  if ( sum2 ) pools.push_back(sum2);

  cout << sum << endl;
  cout << pools.size();
  for ( int i: pools ) cout << " " << i;
  cout << endl;
  
  return 0;
}

