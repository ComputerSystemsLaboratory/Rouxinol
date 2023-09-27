#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int change_to_sec(string time)
{
  int hour = stoi(time.substr(0, 2));
  int minute = stoi(time.substr(3, 2));
  int sec = stoi(time.substr(6, 2));
  // cout << hour << ' ' << minute << ' ' << sec << endl;
  sec += hour * 3600 + minute * 60;
  // cout << sec << endl;
  return sec;
}

int main()
{
  while (true)
  {
    int n;
    cin >> n;
    if (n == 0)
    {
      break;
    }
    vector<int> time_table(86401, 0);
    for (int i = 0; i < n; ++i)
    {
      string start, end;
      cin >> start;
      cin >> end;
      int sec = change_to_sec(start);
      time_table.at(sec) += 1;
      sec = change_to_sec(end);
      time_table.at(sec) -= 1;
    }
    int ans = time_table.at(0);
    // for (int i = 0; i < 86400; ++i)
    // {
    //   if (time_table.at(i) != 0)
    //   {
    //
    //     cout << time_table.at(i) << endl;
    //   }
    // }
    for (int i = 0; i < 86400; ++i)
    {
      time_table.at(i + 1) += time_table.at(i);
      ans = max(ans, time_table.at(i + 1));
    }
    cout << ans << endl;
  }
}

