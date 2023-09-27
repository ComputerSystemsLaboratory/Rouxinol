//include
//------------------------------------------
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
#include <queue>
#include <iterator>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;

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

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int gcd(int a, int b){
   int tmp;
   while(a%b==0){
      tmp=a%b;
      a=b;
      b=tmp;
   }
}

int lcm(int a,int b){
   return a*b/gcd(a,b);
}

bool prime_number(int n){
   if(n < 2){
      return false;
   }
   else if(n == 2){
      return true;
   }
   if(n % 2 == 0){
      return false;
   }
   for(int i=3;i<=n/i;i+=2){
      if(n % i == 0) return false;
      return true;
   }
}

int main(){
   int n;
   long double x[4],y[4];
   cin >> n;
   REP(i,n){
      REP(j,4) cin >> x[j] >> y[j];
      if((x[1]-x[0])/(y[1]-y[0])==(x[3]-x[2])/(y[3]-y[2])) cout << "YES" << endl;
      else if(y[0]==y[1]&&y[2]==y[3]) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}