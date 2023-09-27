#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)

int cnt = 0;
set <string> st;

void calc(string s1, string s2) {
  if(st.find(s1 + s2) == st.end()) {
    cnt++; st.insert(s1 + s2);
  }
  if(st.find(s2 + s1) == st.end()) {
    cnt++; st.insert(s2 + s1);
  }
}

signed main()
{
  int N;
  cin >> N;
  while(N--) {

    string S;
    cnt = 0; st.clear();

    cin >> S;
    for(int i = 1; i <= S.size() - 1; i++) {
      string s1 = S.substr(0, i), s2 = S.substr(i, S.size() - i);
      reverse(s1.begin(), s1.end()), reverse(s2.begin(), s2.end());
      
      string rs1 = s1, rs2 = s2;
      reverse(s1.begin(), s1.end()), reverse(s2.begin(), s2.end());

      calc(s1, s2); calc(s1, rs2); calc(rs1, s2); calc(rs1, rs2);
    }

    cout << cnt << endl;
  }
  return 0;
}