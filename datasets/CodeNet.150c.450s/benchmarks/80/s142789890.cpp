#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define all(c) (c).begin(), (c).end()

using namespace std;
template<class T> inline void chmax(T& a, T b) { if(b > a) a = b; }
template<class T> inline void chmin(T& a, T b) { if(b < a) a = b; }

int main() {
	int S,T;
	int a,b,c,d;	
	cin >> a >> b >> c >> d;
	S = a + b + c + d;
	cin >> a >> b >> c >> d;
	T = a + b + c + d;

	if (S > T) {
		cout << S << endl;
	}
	else {
		cout << T << endl;
	}

	return 0;
}