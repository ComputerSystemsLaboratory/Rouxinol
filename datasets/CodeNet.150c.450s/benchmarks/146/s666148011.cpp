//C++14 (Clang 3.8.0)

#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <climits>
using namespace std;
typedef long long ll;
typedef pair<long long,long long> P;
double eps=1e-10;
int main(){
  int d;
  cin>>d;
  for(int dd=0;dd<d;dd++){
  double x1,x2,x3,x4,y1,y2,y3,y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  double c=(x2-x1)*(y3-y4)-(y2-y1)*(x3-x4);
  if(abs(c)<eps)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
}

