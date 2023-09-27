#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct Event {
  int time, type;
  Event(int type, int time): type(type), time(time){;}
  bool operator<(const Event &rhs) const {
    if (time == rhs.time)
      return type < rhs.type;
    else
      return time < rhs.time;
  }
};

int main()
{
  int N;
  while (cin >> N && N) {
    vector<Event> vec;
    for (int i = 0; i < N; i++) {
      int h, m, s, b, e;
      scanf("%d:%d:%d", &h, &m, &s);
      vec.push_back(Event(0, h * 60 * 60 + m * 60 + s));
      scanf("%d:%d:%d", &h, &m, &s);
      vec.push_back(Event(1, h * 60 * 60 + m * 60 + s - 1));
    }

    sort(vec.begin(), vec.end());
    int ans = 0, cnt = 0;
    for (int i = 0; i < vec.size(); i++) {
      Event e = vec[i];
      if (e.type == 0)
        cnt++;
      else
        cnt--;
      ans = max(ans, cnt);
    }

    cout << ans << endl;
  }
}