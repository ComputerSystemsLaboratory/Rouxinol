#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>
#include <time.h>
#include <tuple>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e12;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

ll sq(ll num) { return num*num; }
ll mod_pow(ll x, ll n) {
	if (n == 0)return 1;
	if (n == 1)return x%MOD;
	ll res = sq(mod_pow(x, n / 2));
	res %= MOD;
	if (n % 2 == 1) {
		res *= x;
		res %= MOD;
	}
	return res;
}
ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return a*b % MOD; }

struct st{
	int val;
	char tag;
	st(int _val,char _tag):val(_val),tag(_tag){}
};

vector<st> bubblesort(vector<st> c){
	rep(i,c.size()){
		for(int j = c.size() - 1;j > i;j--){
			if(c[j].val < c[j-1].val)swap(c[j],c[j-1]);
		}
	}
	return c;
}

vector<st> selectionsort(vector<st> c){
	rep(i,c.size()){
		int minj = i;
		FOR(j, i+1 ,c.size()){
			if(c[minj].val > c[j].val)minj = j;
		}
		swap(c[i],c[minj]);
	}
	return c;
}



bool check(vector<st> C1, vector<char> r[]){
	bool f = true;
	rep(i,10){
		int pos = 0;
		rep(j,C1.size()){
			if(C1[j].val == i){
				if(C1[j].tag == r[i][pos])pos++;
				else f = false;
			}
		}
	}
	return f;
}

int n;
vector<st> C;
vector<char> r[10];

int main(){
	cin >> n;
	rep(i,n){
		string s;
		cin >> s;
		r[s[1]-'0'].push_back(s[0]);
		C.push_back(st(s[1]-'0',s[0]));
	}
	
	vector<st> C1 = bubblesort(C);
	rep(i,C1.size()){
		cout << C1[i].tag << C1[i].val;
		if(i != C1.size() - 1)cout << " ";
 	}
	cout << endl;
	if(!check(C1,r))cout << "Not stable" << endl;
	else cout << "Stable" << endl;
	
	C1 = selectionsort(C);
	rep(i,C1.size()){
		cout << C1[i].tag << C1[i].val;
		if(i != C1.size() - 1)cout << " ";
 	}
	cout << endl;
	if(!check(C1,r))cout << "Not stable" << endl;
	else cout << "Stable" << endl;
}
