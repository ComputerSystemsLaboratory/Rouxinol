#include <iostream>
#include <vector>
#define N_MAX 100000
using namespace std;

vector<int> sns[N_MAX];
int* group;
int g = 0;

void dfs(int s) {
  if (group[s] != 0) return;
  group[s] = g;
  
  int len = sns[s].size();
  for (int i = 0; i < len; i++) {
    dfs(sns[s][i]);
  }
}

int main() {
  int n,m,q,s,t;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> s >> t;

    sns[s].push_back(t);
    sns[t].push_back(s);
  }

  // dfs
  group = new int[n];
  for (int i = 0; i < n; i++) {
    if (group[i] == 0) {
      g++;
      dfs(i);
    }
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> s >> t;
    if (group[s] == group[t]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}