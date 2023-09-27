#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int cy = 201, cx = 201;

struct P{
  int y;
  int x;
};

bool compx(const P& p1, const P& p2)
{
  return p1.x < p2.x;
}

bool compy(const P& p1, const P& p2)
{
  return p1.y < p2.y;
}

int xdir[4] = {-1, 0, 1, 0}, ydir[4] = {0, -1, 0, 1};

int main()
{
  int n, s, t;
  P p;

  while(cin>>n && n){
    vector<P> vec;
    p.x = cx;
    p.y = cy;
    vec.push_back(p);
    for(int i = 1; i < n; i++){
      cin >> s >> t;
      p.x = vec[s].x + xdir[t];
      p.y = vec[s].y + ydir[t];
      vec.push_back(p);
    }
    sort(vec.begin(), vec.end(), compx);
    s = vec[vec.size()-1].x - vec[0].x + 1;
    sort(vec.begin(), vec.end(), compy);
    t = vec[vec.size()-1].y - vec[0].y + 1;

    cout << s << " " << t << endl;
  }

  return 0;
}