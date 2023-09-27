#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <ctime>
#include <iterator>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

struct fPoint
{
    double x;
    double y;
};

float sign(fPoint p1, fPoint p2, fPoint p3)
{
  return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}

bool PointInTriangle(fPoint pt, fPoint v1, fPoint v2, fPoint v3)
{
  bool b1, b2, b3;

  b1 = sign(pt, v1, v2) < 0.0f;
  b2 = sign(pt, v2, v3) < 0.0f;
  b3 = sign(pt, v3, v1) < 0.0f;

  return ((b1 == b2) && (b2 == b3));
}


int main()
{
    fPoint p1,p2,p3,pp;
    while(cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>pp.x>>pp.y)
    {
        cout<<(PointInTriangle(pp,p1,p2,p3)?"YES":"NO")<<endl;
    }
}