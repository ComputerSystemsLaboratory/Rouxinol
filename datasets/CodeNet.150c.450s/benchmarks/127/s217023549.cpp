#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;

set<string> st;

int main(void){
  int m;
  string train;
  cin >> m;
  for(int i = 0; i < m; i++){
    cin >> train;

    st.clear();
    for(int j = 1; j <= train.size(); j++){
      int a = j;
      string c1o, c2o, c1u, c2u;

      for(int i = 0; i < a; i++) c1u += train[i];
      c1o = c1u;
      reverse(c1u.begin(), c1u.end());
      for(int i = a; i < train.size(); i++) c2u += train[i];
      c2o = c2u;
      reverse(c2u.begin(), c2u.end());

      st.insert(c1o + c2o);
      st.insert(c1o + c2u);
      st.insert(c1u + c2o);
      st.insert(c1u + c2u);
      st.insert(c2o + c1o);
      st.insert(c2o + c1u);
      st.insert(c2u + c1o);
      st.insert(c2u + c1u);
    }

    cout << st.size() << endl;
  }
  return 0;
}