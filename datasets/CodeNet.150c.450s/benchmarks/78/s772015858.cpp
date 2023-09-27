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
#include <numeric>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define PREP(it,array) for(vector<P>::iterator it=array.begin(); it!=array.end(); ++it)
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


const int N=1000000;
int dp[N], oddDp[N];
const int M=200;
int p[M];


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(7);


  p[0]=INF;
  for(int i=1; i<M; i++){
    int num = i*(i+1)*(i+2)/6;
    p[i]=num;
  }

  fill( dp, dp+N, INF );
  fill( oddDp, oddDp+N, INF );
  dp[0] = 0;
  oddDp[0] = 0;

  REP(i,N){

    REP(j,M){
      if( i-p[j] >= 0 ){
	if( p[j] %2 == 1 )
	  oddDp[i] = min( oddDp[i], oddDp[i-p[j]]+1 );
	dp[i] = min( dp[i], dp[i-p[j]]+1 );
      }
    }

  }

  int n;
  while(cin>>n,n){
    cout << dp[n] << " " << oddDp[n] << endl;
  }
  

  return 0;
}