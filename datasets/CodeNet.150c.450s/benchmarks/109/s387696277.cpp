#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void read(int& s0, int& s1)
{
  char d;
  int h0, m0, h1, m1;
  cin >> h0 >> d >> m0 >> d >> s0;
  cin >> h1 >> d >> m1 >> d >> s1;
  s0 += 3600*h0 + 60*m0;
  s1 += 3600*h1 + 60*m1;
}

int main()
{
  int n;
  while (cin >> n && n != 0) {
    vector<pair<int,int> > entries(n);
    for (int i = 0; i < n; i++) {
      read(entries[i].first, entries[i].second);
    }
    sort(entries.begin(), entries.end());

    priority_queue<int, vector<int>, greater<int> > q;
    q.push(entries.front().second);
    for (int i = 1; i < n; i++) {
      if (q.top() > entries[i].first) {
        q.push(entries[i].second);
      } else {
        q.pop();
        q.push(entries[i].second);
      }
    }
    cout << q.size() << endl;
  }
  return 0;
}