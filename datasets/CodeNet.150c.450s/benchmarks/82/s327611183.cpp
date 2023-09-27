#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

struct Dice{
  int t, r, f;
  int top() { return t; }
  int bottom() { return 7 - t; }
  int right() { return r; }
  int left() { return 7 - r; }
  int front() { return f; }
  int back() { return 7 - f; }
  void toFront() { swap(f, t); t = 7 - t; }
  void toBack() { toFront(); toFront(); toFront(); }
  void toRight() { swap(t, r); t = 7 - t; }
  void toLeft() { toRight(); toRight(); toRight(); }
  void toClock() { swap(f, r); r = 7 - r; }
  void toConter() { toClock(); toClock(); toClock(); }
  int roll(int tt, int ff) {
    REP(i,30) {/*top??¨front???????????¨right????????????*/
      if (i % 10 == 0) toRight();
      else if (i % 10 == 5) toFront();
      else toClock();
      if (tt == t && ff == f) return r;
    }
    return 0;
  }
};

int main(){
	Dice dai1;
	int men[7];
	FOR(i,1,7) cin >> men[i];
	int n;
	cin >> n;
	dai1.t = 1;
	dai1.f = 2;
	dai1.r = 3;
	REP(i,n){
		int to_top,to_front;
		cin >> to_top >> to_front;
		FOR(i,1,7){
			if(to_top == men[i]) to_top = i;
			if(to_front == men[i]) to_front = i;//????????¢????????????????????????????????????
		}
		cout << men[dai1.roll(to_top,to_front)] << endl;
	}
}