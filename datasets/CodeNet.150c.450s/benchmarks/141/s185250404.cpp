/*

Parallelism(https://onlinejudge.u-aizu.ac.jp/problems/0021)
前

*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <complex>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <iomanip>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define put(x) cout << x;
#define putsp(x) cout << x << ' ';
#define putln(x) cout << x << endl;
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef complex<double> comp;
typedef vector <int> vec;
typedef vector <ll> vecll;
typedef vector <double> vecd;
typedef vector <vec> mat;
typedef vector <vecll> matll;
typedef vector <vecd> matd;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 200000;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const ll INFL = 1e18;
const int MOD = 1000000007;

int dx4[4]={1,0,-1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={1,0,-1,1,-1,1,0,-1};
int dy8[8]={1,1,1,0,0,-1,-1,-1};

//********************************template END****************************************//

//外積を計算する関数
double gaiseki(comp a, comp b)
{
	return (conj(a)*b).imag();
}

void solve(void){

	double xs[4], ys[4];

	while(cin >> xs[0] >> ys[0])
	{

		rep(3, i)
		{
			cin >> xs[i+1] >> ys[i+1];
		}

		vector <comp> ps(4);
		rep(4, i)
		{
			ps[i] = comp(xs[i], ys[i]);
		}

		int cnt = 0, on = 0;

		rep(3, i)
		{
			if (gaiseki(ps[i]-ps[3], ps[(i+1)%3]-ps[3]) > 0)
			{
				cnt++;
			}
			else if (gaiseki(ps[i]-ps[3], ps[(i+1)%3]-ps[3]) < 0)
			{
				cnt--;
			}
			else
			{
				//辺上にあるかのフラグ
				on = 1;
			}

			//cout << cnt << endl;

		}

		cout << ((abs(cnt) != 3 || on) ? "NO" : "YES") << endl;

	}

}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

