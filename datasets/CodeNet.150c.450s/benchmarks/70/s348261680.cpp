#include <bits/stdc++.h>
using namespace std;

int main(){
  for (;;) {
    int m, d;
    cin >> m >> d;
    if (m == 0) break;

    vector<int> day = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int tmp = d;
    for (int i = 0; i < m - 1; i++) {
      tmp += day.at(i);
    }

    int ans = tmp % 7;
    vector<string> week = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    cout << week.at(ans) << endl;
  }
}

