#include<iostream>
#include<queue>
#include<string>

using namespace std;

pair <string, int> P;

int main(void) {
  int n;
  int quantum;

  queue<pair<string, int> > Q;
  cin >> n;
  cin >> quantum;

  pair<string, int> inputer;
  for(int i = 0; i < n; i++) {
    cin >> inputer.first;
    cin >> inputer.second;
    Q.push(inputer);
  }
  
  int minTime;
  int passedTime = 0;
  while(!Q.empty()) {
    pair<string, int> item = Q.front();
    Q.pop();
    int sub = item.second - quantum;
    minTime = min(item.second, quantum);
    passedTime += minTime;
    if(sub > 0) {
      pair<string, int> adder;
      adder.first = item.first;
      adder.second = sub;
      Q.push(adder);
    }
    else {
      cout << item.first << " " << passedTime << endl;
    }
  }
  return 0;
}