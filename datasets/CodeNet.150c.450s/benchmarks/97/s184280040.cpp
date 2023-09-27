#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
  int N;
  int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
  while(true){
    cin >> N;
    if(N == 0)
      break;

    vector< pair<int, int> > v(N);
    v[0] = pair<int, int>(0, 0);
    int xmin = 0, xmax = 0, ymin = 0, ymax = 0;
    int n, d;
    for(int i=1; i<=N-1; i++){
      cin >> n >> d;
      v[i] = pair<int, int>(v[n].first + dx[d], v[n].second + dy[d]);
      xmin = min(xmin, v[n].first + dx[d]);
      xmax = max(xmax, v[n].first + dx[d]);
      ymin = min(ymin, v[n].second + dy[d]);
      ymax = max(ymax, v[n].second + dy[d]);
    }
    cout << xmax - xmin + 1 << ' ' << ymax - ymin + 1 << endl;
  }
  
  return 0;
}