#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int N,M,P;
  while(cin>>N>>M>>P){
    if(N==0) break;
    vector<int> X(N);
    REP(i,N)cin>>X[i];
    int sum=0;
    REP(i,N)sum+=X[i];
    double money = sum*100;
    money *= (double)(100-P)/100;
    if(X[M-1])money /= (double)X[M-1];
    else money =0;
    cout<<(int)money<<endl;
  }
  return 0;
}