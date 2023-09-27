#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char* argv[]) {
  queue<int> q;
  int x, y;

  cin >> x >> y;
  while(!(x == 0 && y == 0)){
    q.push(x);
    q.push(y);
    cin >> x >> y;
  }

  while(!q.empty()){
    int a = q.front();
    q.pop();
    int b = q.front();
    q.pop();
    cout << min(a, b) << " " << max(a, b) << endl;
  }

  return 0;
}