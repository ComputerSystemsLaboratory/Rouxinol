#include <iostream>
#include <queue>
#include <string>
#define rep(i,a) for(i = 0; i < a; i++)
using namespace std;

struct Process {
  string name;
  int time_i;
};

int main(void) {

  int i,n,q,TotalTime = 0;
  queue<Process> qu;
  Process tmp;

  cin >> n >> q;
  rep(i,n) {
    cin >> tmp.name >> tmp.time_i;
    qu.push(tmp);
  }

  while(!qu.empty()) {
    tmp = qu.front();
    qu.pop();
    if(tmp.time_i - q > 0) {
      tmp.time_i =tmp.time_i - q;
      TotalTime += q;
      qu.push(tmp);
    } else {
      TotalTime += tmp.time_i;
      cout << tmp.name << " " << TotalTime << endl;
    }
  }
  return 0;
}