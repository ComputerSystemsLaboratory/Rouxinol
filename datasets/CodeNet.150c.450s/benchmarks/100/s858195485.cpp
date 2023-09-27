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
#include <set>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define SREP(it,array) for(vector<string>::iterator it=array.begin(); it!=array.end(); ++it)

#define MP       make_pair
#define PB       push_back
#define ALL(x)   (x).begin(),(x).end()

const int INF = 1<<29;
const double EPS = 1e-9;
double zero(double d){
  return d < EPS ? 0.0 : d;
}

typedef long long LL;
typedef pair<int,int> P;


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(7);

  int n;
  cin >> n;
  
  LL res=1L;
  REP(i,n){
    res *= i+1;
  }

  cout << res << endl;

  return 0;
}