#include<queue>
#include<string>
#include<utility>
#include<iostream>
using namespace std;

int main() {
  queue< pair<string,int> > Q;
  pair<string,int> temp;
  int n, qtm, i, time=0;
  cin >> n >> qtm;
  for(; n > 0; n--) {
    cin >> temp.first >> temp.second;
    Q.push(temp);
  }
  while(! Q.empty()) {
    i = Q.front().second - qtm;
    if (i <= 0) {
      time += qtm + i;
      cout << Q.front().first << " " << time << endl;
      Q.pop();
    } else {
      time += qtm;
      temp.first = Q.front().first;
      temp.second = i;
      Q.pop();
      Q.push(temp);
    }
  }
  return 0;
}