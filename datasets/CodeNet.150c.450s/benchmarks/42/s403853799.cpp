#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <cassert>
#include <memory>
#include <queue>
using namespace std;

struct Process {
  string name_;
  int time_;
};

int main() {
  int n,q;
  cin >> n >> q;

  queue<Process> qq;
  for(int i = 0; i < n; i++) {
    Process process;
    cin >> process.name_ >> process.time_;
    qq.push(process);
  }

  int elapsed_time = 0;
  while(!qq.empty()) {
    auto process = qq.front();
    qq.pop();

    if(process.time_ <= q) {
      elapsed_time += process.time_;
      cout << process.name_ << " " << elapsed_time << endl;
    } else {
      elapsed_time += q;
      process.time_ -= q;
      qq.push(process);
    }
  }
}

