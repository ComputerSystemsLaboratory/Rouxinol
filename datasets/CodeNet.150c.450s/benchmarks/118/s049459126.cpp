#include <iostream>
#include <cstdio>
#include <vector>
#include <complex>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <cstring>
#include <stack>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <cassert>

using namespace std;

typedef long long ll;
typedef ll li;
typedef pair<int,int> PI;
#define EPS (1e-10L)
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define F first
#define S second
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SZ(a) (int)((a).size())
#define ALL(a) a.begin(),a.end()
#define FOR(it,a) for(__typeof(a.begin())it=a.begin();it!=a.end();++it)
void pkuassert(bool t){t=1/t;};

int dx[]={0,1,0,-1,1,1,-1,-1};
int dy[]={1,0,-1,0,-1,1,1,-1};

int main(int argc, char *argv[])
{
  ll y=1,m=1,d=1;
  int cnt=0;
  map<ll,int> hoge;
  while(true){
    if(y==1002) break;
    hoge[y*10000000000+m*1000+d]=cnt++;
    ++d;
    if(y%3!=0 && m%2==0 && d==20) d=1;
    else if(d==21) d=1;
    if(d==1) ++m;
    if(m==11){
      m=1;
      ++y;
    }
  }
  int n;
  cin>> n;
  rep(i,n){
    int y,m,d;
    cin >> y >> m >> d;
    cout << hoge[1000*10000000000+1*1000+1]-hoge[y*10000000000+m*1000+d] << endl;
  }
  
  return 0;
}