#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
#define FILL(ptr, value) FILL_((ptr), sizeof(ptr)/sizeof(value), (value))
template <typename T>
void FILL_(void * ptr, size_t size, T value){
  std::fill((T*)ptr, (T*)ptr+size, value);
}
//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};

int main()
{
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while( cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
  double s;
  double a,b,c;
  a =sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  c =sqrt(pow(x1-x3,2)+pow(y1-y3,2));
  b =sqrt(pow(x2-x3,2)+pow(y2-y3,2));
  s =(a+b+c)/2;
  double abcS =sqrt(s*(s-a)*(s-b)*(s-c));
  double ap,bp,cp;
  ap =sqrt(pow(x1-xp,2)+pow(y1-yp,2));
  bp =sqrt(pow(x2-xp,2)+pow(y2-yp,2));
  cp =sqrt(pow(x3-xp,2)+pow(y3-yp,2));
  s =(ap+bp+a)/2;
  double abpS =sqrt(s*(s-ap)*(s-bp)*(s-a));
  s =(bp+cp+b)/2;
  double bpcS =sqrt(s*(s-bp)*(s-cp)*(s-b));
  s =(ap+cp+c)/2;
  double apcS =sqrt(s*(s-ap)*(s-cp)*(s-c));
  double var =abcS-(abpS+bpcS+apcS);
  if((var<=0.001&&var>=-0.01))
     var=0.0;
  if(var==0.0)
    cout <<"YES"<<endl;
  else
    cout <<"NO"<<endl;
  
  }
  return 0;
}