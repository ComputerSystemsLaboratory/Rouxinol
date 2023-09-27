#include<iostream>
#include<string>
#include<vector>

using namespace std;

int FindRoad(const vector<vector<int> >& road, int x, int y);

int h,w;
int n;
int dummy = 0;
int result = 0;

int main(void) {
  int x,y;
  vector<vector<int> > road(18,vector<int>(18));
  cin >> w >> h;
  while(w != 0 && h != 0) {
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> x >> y;
      road[x][y] = 1;
    }
    cout << FindRoad(road,1,1) << endl;
    for(int x = 0; x < 18; x++) {
      for(int y = 0; y < 18; y++) {
        if(road[x][y] == 1)
          road[x][y] = 0;
      }
    }
    result = 0;
    cin >> w >> h;
  }
  return 0;
}

int FindRoad(const vector<vector<int> >& road, int x, int y) {
  if( (x - 1 == w || y - 1 == h) || road[x][y] == 1) return 0;
  if( x == w && y == h) { result++; return result; }
  dummy = FindRoad( road, x, y + 1);
  dummy = FindRoad( road, x + 1, y);
  return result;
}