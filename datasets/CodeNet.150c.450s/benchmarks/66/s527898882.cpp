#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<string> id;
map<bool, string> st;
bool isOpen = false;

void solve(string t) {
  if(find(id.begin(), id.end(), t) != id.end()) {
    isOpen = !isOpen;
    cout << st[isOpen] << t << endl;
  }
  else {
    cout << "Unknown " << t << endl;
  }
}

int main() {
  int n, m;
  string buf;
  st.insert(make_pair(true, "Opened by "));
  st.insert(make_pair(false, "Closed by "));
  cin >> n;
  for(int i = 0; i < n; ++i) {
    cin >> buf;
    id.push_back(buf);
  }
  cin >> m;
  for(int i = 0; i < m; ++i) {
    cin >> buf;
    solve(buf);
  }
  return 0;
}

