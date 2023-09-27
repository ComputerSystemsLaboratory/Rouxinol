#include <iostream>
#include <vector>
#include <set>

using namespace std;

int n, d[110], f[110], t = 0;
set<int> st;
vector<int> g[110];

void dfs(int m) {
  t++;
  d[m] = t;
  st.erase(m);
  for(int i = 0; i < g[m].size(); i++) {
    if(d[g[m][i]] == -1) {
      dfs(g[m][i]);
    }
  }
  t++;
  f[m] = t;
}

int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    int index, k, v;
    cin >> index >> k;
    for(int j = 0; j < k; j++) {
      cin >> v;
      g[index].push_back(v);
    }
    st.insert(index);
    d[index] = -1;
  }
  while(!st.empty()) {
    auto itr = st.begin();
    dfs(*itr);
  }
  for(int i = 0; i < n; i++)
    cout << i+1 << " " << d[i+1] << " " << f[i+1] << endl;

  return 0;
}

    