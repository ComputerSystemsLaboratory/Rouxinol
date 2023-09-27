#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int main(void){
  while(true){
    int N;
    cin >> N;
    if(N == 0){ break; }

    int n, d, maxx, minx, maxy, miny;
    vector<pair<int, int> > pablo;
    pablo.push_back(make_pair(0, 0));
    maxx = minx = maxy = miny = 0;
    for(int i = 1; i < N; i++){
      cin >> n >> d;
      int newx = pablo[n].first + dx[d];
      int newy = pablo[n].second + dy[d];
      maxx = max(maxx, newx);
      minx = min(minx, newx);
      maxy = max(maxy, newy);
      miny = min(miny, newy);
      pablo.push_back(make_pair(newx, newy));
    }

    cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
  }
  
  return 0;
}