#include <bits/stdc++.h>
using namespace std;
int next(int a, int L){
  string S = to_string(a);
  while (S.size() < L){
    S = '0' + S;
  }
  string S1 = S;
  sort(S1.begin(), S1.end());
  string S2 = S;
  sort(S2.rbegin(), S2.rend());
  return stoi(S2) - stoi(S1);
}
int main(){
  while (1){
    int a0, L;
    cin >> a0 >> L;
    if (a0 == 0 && L == 0){
      break;
    }
    set<pair<int, int>> st;
    st.insert(make_pair(a0, 0));
    int a = a0;
    int n = 0;
    while (1){
      n++;
      int b = next(a, L);
      auto itr = st.lower_bound(make_pair(b, -1));
      if (itr != st.end()){
        if ((*itr).first == b){
          int i = n;
          int j = (*itr).second;
          cout << j << ' ' << b << ' ' << i - j << endl;
          break;
        }
      }
      st.insert(make_pair(b, n));
      swap(a, b);
    }
  }
}
