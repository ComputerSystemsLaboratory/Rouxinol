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
struct Dice{/*Procon Lib from @primenumber*/
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
};

int main(){
	Dice dai1;
	int men[7];
	FOR(i,1,7) cin >> men[i];
	dai1.t = 1; dai1.r = 3; dai1.f = 2;
	string s;
	cin >> s;
	REP(i,s.size()){
		if(s[i]=='W') dai1.toLeft();
		if(s[i]=='E') dai1.toRight();
		if(s[i]=='N') dai1.toBack();
		if(s[i]=='S') dai1.toFront();
	}
	cout << men[dai1.t] << endl;
}