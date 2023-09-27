#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int second_per_day = 86400;

int to_sec(int hour, int minute, int second) {
  return hour * 3600 + minute * 60 + second;
}

int main() {
  int depature_times;
  vector<int> times(second_per_day, 0);

  while(true) {
    cin >> depature_times;

    if(depature_times == 0) {
      break;
    }

    // clear
    for(int i = 0; i < times.size(); i++) {
      times[i] = 0;
    }

    // preprocess
    for(int i = 0; i < depature_times; i++) {
      int hour, minute, second;

      // Deaptrue
      scanf("%d:%d:%d", &hour, &minute, &second);
      times[to_sec(hour, minute, second)] += 1;

      // Arrive
      scanf("%d:%d:%d", &hour, &minute, &second);
      times[to_sec(hour, minute, second)] += -1;
    }

    // simulate
    int tmp_max = times[0];
    for(int i = 1; i < times.size(); i++) {
      times[i] += times[i - 1];
      tmp_max = max(times[i], tmp_max);

      if(tmp_max == 4) {

      }
    }

    cout << tmp_max << endl;
  }
}
