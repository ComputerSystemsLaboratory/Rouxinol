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

typedef pair<int,int> P;


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(7);
  int INF = 1000000;

  map<string,int> data;
  string str;
  while(cin >> str){
    data[str]++;
  }

  map<string,int>::iterator freq=data.begin();
  map<string,int>::iterator len=data.begin();

  for(map<string,int>::iterator it=data.begin(); it!=data.end(); ++it){
    if( (*freq).second < (*it).second )
      freq = it;
    if( (*len).first.length() < (*it).first.length() )
      len = it;
  }

  cout << (*freq).first << " " << (*len).first << endl;

  return 0;
}