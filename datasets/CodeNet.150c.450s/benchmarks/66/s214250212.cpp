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
  map<string,int> key;
  int n;
  cin >> n;
  string in;
  int op=0;
  rep(i,n){
    cin >> in;
    key[in]=0;
  }

  cin >> n;
  rep(i,n){
    cin >> in;
    if(key.count(in)){
      cout << (!op?"Opened":"Closed") << " by " << in << endl;
      op^=1;
    }else cout << "Unknown " << in << endl;
  }
  
  return 0;
}