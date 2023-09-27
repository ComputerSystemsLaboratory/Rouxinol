#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class points {
public:
  int x;
  int y;
};

int main() {
  int nSize;
  const int dx[] = {-1, 0, 1, 0};
  const int dy[] = {0, -1, 0, 1};
  points fst;
  fst.x = 0;
  fst.y = 0;
  while(cin>>nSize && nSize>0) {
    vector<points> sq;
    sq.push_back(fst);
    int n, d;
    int xMax, yMax, xMin, yMin;
    xMax = 0;
    yMax = 0;
    xMin = 0;
    yMin = 0;
    for(int i=0; i<nSize-1; i++) {
      cin>>n>>d;
      points tmp;
      tmp.x = sq[n].x+dx[d];
      tmp.y = sq[n].y+dy[d];
      sq.push_back(tmp);
      if(xMax < tmp.x) {
	xMax = tmp.x;
      }
      if(yMax < tmp.y) {
	yMax = tmp.y;
      }
      if(tmp.x < xMin) {
        xMin = tmp.x;
      }
      if(tmp.y < yMin) {
        yMin = tmp.y;
      }
    }
    int xRange = xMax-xMin+1;
    int yRange = yMax-yMin+1;
    cout<<xRange<<" "<<yRange<<endl;
  }
}