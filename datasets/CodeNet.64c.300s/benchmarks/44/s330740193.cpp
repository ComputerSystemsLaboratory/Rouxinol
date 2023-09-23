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

const int INF = 1<<20;
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

  const int TOWN = 10;

  int n;
  while(cin>>n,n){

    int cost[TOWN][TOWN];
    REP(i,TOWN){
      fill( cost[i], cost[i]+TOWN, INF );
      cost[i][i]=0;
    }

    int tnum = 0;
    REP(_t,n){
      int a,b,c;
      cin >>a>>b>>c;
      cost[a][b] = cost[b][a] =  c;
      tnum = max( tnum, max(a,b) );
    }
    tnum++;

    REP(k,tnum){
      REP(i,tnum)
	REP(j,tnum)
	cost[i][j] = min( cost[i][j], cost[i][k] + cost[k][j] );
    }

    int res=INF;
    int num=0;
    REP(i,tnum){
      int tmp=0;
      REP(j,tnum){
	tmp += cost[i][j];
      }
      if( res > tmp ){
	res = tmp;
	num = i;
      }
    }

    cout << num << " " << res << endl;
  }

  return 0;
}