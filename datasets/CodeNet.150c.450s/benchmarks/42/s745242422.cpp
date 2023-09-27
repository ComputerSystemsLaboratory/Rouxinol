#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void read_line_with_space(vector<string> &list) {
  string str;
  getline(cin, str);
  string tmp;
  istringstream istr(str);
  while (getline(istr, tmp, ' ')) {
    list.push_back(tmp);
  }
}

void round_robin(vector<pair<string, int>> processes, int quantum) {
  int time = 0;
  queue<pair<string, int>> q;
  for (auto process : processes) {
    q.push(process);
  }
  while (!q.empty()) {
    auto process = q.front();
    q.pop();
    if (process.second <= quantum) {
      cout << process.first << " " << time + process.second << endl;
      time += process.second;
    } else {
      process.second -= quantum;
      q.push(process);
      time += quantum;
    }
  }
}

int main() {
  vector<string> v;
  read_line_with_space(v);
  int N = stoi(v[0]);
  int quantum = stoi(v[1]);

  vector<pair<string, int>> processes;
  for (int i = 0; i < N; ++i) {
    v.clear();
    read_line_with_space(v);
    pair<string, int> p;
    p.first = v[0];
    p.second = stoi(v[1]);
    processes.push_back(p);
  }
  round_robin(processes, quantum);
}