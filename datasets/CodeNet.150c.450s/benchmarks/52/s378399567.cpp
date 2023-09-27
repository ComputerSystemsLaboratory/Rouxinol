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
#include <stack>
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

  stack<int> rail;

  int a;
  while(cin>>a){
    if(a!=0){
      rail.push(a);
    }
    else{
      cout << rail.top() << endl;
      rail.pop();

    }
  }
  


  return 0;
}