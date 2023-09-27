#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <string>
#include <queue>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define SREP(it,array) for(vector<string>::iterator it=array.begin(); it!=array.end(); ++it)
#define MP make_pair
typedef long long LL;
#define EPS (1e-6)
double zero(double d){
  return d < EPS ? 0.0 : d;
}

typedef pair<double,double> P;

bool isCross(P p1, P p2, P p3, P p4){
  double c = ((p1.first - p2.first) * (p3.second - p1.second) + (p1.second - p2.second) * (p1.first - p3.first)) * 
    ((p1.first - p2.first) * (p4.second - p1.second) + (p1.second - p2.second) * (p1.first - p4.first));
  if(c<=0.0)
    return true;
  return false;
}

int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(3);

  int INF = 1000000;

  double x1,y1,x2,y2,x3,y3,xp,yp;
  while( cin >>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
    P p1(x1,y1),p2(x2,y2),p3(x3,y3),px(xp,yp);
    if( isCross(p1,p2,p3,px) || isCross(p1,p3,p2,px) || isCross(p2,p3,p1,px) )
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  


  return 0;
}