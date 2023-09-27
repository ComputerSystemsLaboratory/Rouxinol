#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int time_parse(string time)
{
  int hour = atoi(time.substr(0, 2).c_str());
  int minute = atoi(time.substr(3, 5).c_str());
  int second = atoi(time.substr(6).c_str());
  return hour * 3600 + minute * 60 + second;
}

int main()
{
  int n;
  while (cin >> n && n)
  {
    int table[24 * 3600] = {0};
    string time_in, time_out;
    for (int i = 0; i < n; i++)
    {
      cin >> time_in >> time_out;
      table[time_parse(time_in)]++;
      table[time_parse(time_out)]--;
    }
    int ans = 0, sum = 0;
    for (int i = 0; i < 24 * 3600; i++)
    {
      sum += table[i];
      ans = max(sum, ans);
    }
    cout << ans << endl;
  }
}
