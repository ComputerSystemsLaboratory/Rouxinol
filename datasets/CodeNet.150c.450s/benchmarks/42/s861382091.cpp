#include <iostream>
#include <queue>
#include <utility>


using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  queue< pair<string, int> > Q;


  for (int i = 0; i < n; ++i) {
    string name;
    int time;
    cin >> name >> time;
    Q.push(make_pair(name, time));
  }

  int time_stamp = 0;

  while (!Q.empty()) {
    if (Q.front().second <= q) {
    time_stamp += Q.front().second;
cout << Q.front().first << " " << time_stamp  << endl;
      Q.pop();
    } else {
      time_stamp += q;
      Q.front().second -= q;
      pair<string, int> rescheduled = Q.front();
      Q.pop();
      Q.push(rescheduled);
    }
  }
      

  
  
  return 0;
}