#include <vector>
#include <list>
#include <map>
#include <set>
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
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

using namespace std;
int main(void)
{
  int m;
  cin >> m;
  while(m--){
    string str;
    set<string> cantrain;
    cin >> str;
    FOR(i,1,SZ(str)){
      string
	f(str.begin(),str.begin()+i),
	b(str.begin()+i,str.end()),
	rb(str.rbegin(),str.rend()-i),
      	rf(str.rend()-i,str.rend());
      cantrain.insert(f+b);
      cantrain.insert(b+f);
      cantrain.insert(f+rb);
      cantrain.insert(rb+f);
      cantrain.insert(rf+b);
      cantrain.insert(b+rf);
      cantrain.insert(rf+rb);
      cantrain.insert(rb+rf);
    }
    cout << SZ(cantrain) << endl;
  }
  return 0;
}