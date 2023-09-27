#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int n, m;
string u[256];
bool open;

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) cin >> u[i];
  open = false;
  scanf("%d", &m);
  string t;
  for (int i = 0; i < m; i++) {
    cin >> t;
    bool flag = true;
    for (int j = 0; j < n; j++) {
      if (t == u[j]) {
        if (open) cout << "Closed by " << t << "\n";
        else cout << "Opened by " << t << "\n";
        open = !open;
        flag = false;
        break;
      }
    }
    if (flag) cout << "Unknown " << t << "\n";
  }
}

