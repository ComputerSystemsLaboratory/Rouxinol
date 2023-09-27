#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<complex>

#define INF (long long)1000000000
#define MOD 1000000007
#define EPS 1e-8

#define REP(i, m) for(long long i = 0; i < m; ++i)
#define FOR(i, n, m) for(long long i = n; i < m; ++i)
#define ALL(v) v.begin(), v.end()
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;

enum FACE{TOP, BOTTOM, FRONT, BACK, LEFT, RIGHT};
class Dice {
public:
	Dice() {
		id[TOP] = 0; id[BOTTOM] = 1; id[FRONT] = 2;
		id[BACK] = 3; id[LEFT] = 4; id[RIGHT] = 5;
	}
	Dice(int top,int bottom, int front, int back, int left, int right) {
		id[TOP] = top; id[BOTTOM] = bottom; id[FRONT] = front;
		id[BACK] = back; id[LEFT] = left; id[RIGHT] = right;
	}
	int& operator[] (FACE f) { return id[f]; }
	void rotX(int c) {
		for(int i = 0; i < c; ++i) {
			int top = id[BACK], front = id[TOP], bottom = id[FRONT], back = id[BOTTOM];
			id[TOP] = top; id[FRONT] = front;
			id[BOTTOM] = bottom; id[BACK] = back;
		}
	}
	void rotY(int c) {
		for(int i = 0; i < c; ++i) {
			int top = id[LEFT], right = id[TOP], bottom = id[RIGHT], left = id[BOTTOM];
			id[TOP] = top; id[RIGHT] = right;
			id[BOTTOM] = bottom; id[LEFT] = left;
		}
	}
	void rotZ(int c) {
		for(int i = 0; i < c; ++i) {
			int front = id[RIGHT], left = id[FRONT], back = id[LEFT], right = id[BACK];
			id[FRONT] = front; id[LEFT] = left;
			id[BACK] = back; id[RIGHT] = right;
		}
	}
private:
	int id[6];
};

int main() {
	Dice d;
	int top,right,front,back,left,bottom;
	cin>>top>>right>>front>>back>>left>>bottom;
	d[TOP]=top;
	d[RIGHT]=right;
	d[FRONT]=front;
	d[BACK]=back;
	d[LEFT]=left;
	d[BOTTOM]=bottom;
	string s;
	cin>>s;
	REP(i,s.size()) {
		char c=s[i];
		if(c=='N'){ d.rotY(3); }
		if(c=='E'){ d.rotX(1); }
		if(c=='W'){ d.rotX(3); }
		if(c=='S'){ d.rotY(1); }
	}
	cout<<d[TOP]<<endl;
}