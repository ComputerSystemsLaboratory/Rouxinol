#pragma GCC diagnostic ignored "-Wunused-variable" 
#include <bits/stdc++.h>
using namespace std;

//#define BOOST
#ifdef BOOST
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/range/adaptor/reversed.hpp>
using namespace boost;
using ml = boost::multiprecision::cpp_int;
using md = boost::multiprecision::cpp_dec_float_100;
#define forir(i, ...) if(ll i=(ll)v.size())for(__VA_ARGS__)if(i--,1)
#define eachr(i, e, c) forir(i, auto &&e: adaptors::reverse(c))
#endif

/***** type *****/
using ll = long long;
using ld = long double;
using pll = pair<long long, long long>;
template <class T> using vt = vector<T>;
template <class T> using vvt = vector<vector<T>>;
template <class T> using vvvt = vector<vector<vector<T>>>;
/***** define *****/
#define all(c) (c).begin(), (c).end()            // begin to end
#define coutd cout << fixed << setprecision(10)  // cout double
#define output(x) do{cout<<x;return 0;}while(0)  // cout return
#define rep(i, b, e) for (ll i = b; i < e; i++)  // repeat
#define repr(i, b, e) for (ll i = b; e < i; i--) // repeat reverse
#define fori(i, ...) if (ll i = -1) for(__VA_ARGS__) if (i++, 1)
#define each(i, e, c) fori (i, auto&& e: c)      // for each
/***** const value *****/
#define llong_max 9223372036854775807LL          // 9 * 10^18
#define ldbl_max 1.79769e+308                    // 1.7 * 10^308
#define pi 3.1415926535897932                    // 3.14 ...
/***** lambda *****/
auto Ceil = [] // if (a % b != 0) return a / b + 1;
(auto x) { return (ll)ceil(x); };
auto Count = [] // long long count value
(auto b, auto e, auto x) { return (ll)count(b, e, x); };
auto CtoL = [] // char to number
(auto c) { return (ll)c - (ll)'0'; };
auto LtoC = [] // number to char
(auto n) { return (char)('0' + n); };
auto Pow = [] // long long pow
(auto a, auto b) { return (ll)pow(a, b); };
auto Pow2 = [] // long long pow2
(auto n) { return (1LL << n); };
auto Pow10 = [] // long long pow10
(auto n) { return (ll)pow(10, n); };
auto Size = []  // long long collection size
(auto& c) { return (ll)(c).size(); };
auto Sum = [] // long long accumulate
(auto b, auto e) { return accumulate(b, e, 0LL); };

/***** template *****/
template <class T> void MakeVVT
(ll ys, ll xs, vvt<T>& v, T fill = T())
{	// vector<vector<T>> resize + fill
	v.resize(ys); rep(y, 0, ys) v[y].resize(xs, fill);
}
template <class T> void MakeVVVT
(ll zs, ll ys, ll xs, vvvt<T>& v, T fill = T())
{	// vector<vector<vector<T>>> resize + fill
	v.resize(zs); rep(z, 0, zs) MakeVVT(ys, xs, v[z], fill);
}
template <class T> void InputVT
(ll xs, vt<T>& v, T fix = T())
{	// input vector<T> (T != struct) + fix
	v.resize(xs); rep(i, 0, xs) { cin >> v[i]; v[i] += fix; }
}
template <class T> void InputVVT
(ll ys, ll xs, vvt<T>& v, T fix = T())
{	// input vector<vector<T>> (T != struct) + fix
	MakeVVT(ys, xs, v, fix);
	rep(y, 0, ys) rep(x, 0, xs) { cin >> v[y][x]; v[y][x] += fix; }
}
template <class T> void InputVVVT
(ll zs, ll ys, ll xs, vvvt<T>& v, T fix = T())
{	// input vector<vector<vector<T>>> (T != struct) + fix
	v.resize(zs); rep(z, 0, zs) InputVVT(ys, xs, v[z], fix);
}

/**************************************/
/********** BEGIN OF NYA LIB **********/
/**************************************/

namespace NyaGadget {}

namespace NyaGadget
{
	/***** ワーシャルフロイド法ライブラリ *****/
	struct GT_WarshallFloyd
	{
		/**
		@brief 全点対間最短路を求める
		@param mg 隣接行列
		@param res 最短距離を返す
		@param inf 存在しない辺の値
		@note
		計算量O(V^3)なので隣接行列にしか適用できない。
		負の閉路がある場合falseを返す。
		**/
		static bool Run(std::vector<std::vector<long long>>& mg, std::vector<std::vector<long long>>& res, long long inf = LLONG_MAX)
		{
			long long vmax = (long long)mg.size();
			rep(i, 0, vmax) mg[i][i] = 0;

			res = mg;
			for (auto k = 0LL; k < vmax; k++)
			{
				for (auto i = 0LL; i < vmax; i++)
				{
					if (res[i][k] == inf) continue;
					for (auto j = 0LL; j < vmax; j++)
					{
						if (res[k][j] == inf) continue;
						res[i][j] = min(res[i][j], res[i][k] + res[k][j]);
					}
				}
			}
			for (auto i = 0LL; i < vmax; i++)
			{
				if (res[i][i] < 0) return false;
				res[i][i] = inf;
			}
			return true;
		}
	};
}

/**************************************/
/*********** END OF NYA LIB ***********/
/**************************************/

using namespace NyaGadget;
//using mll = NT_ModLL< 1000000007 >;
//using mll = NT_ModLL< 998244353 >;

int main(void)
{
	ll V, E; cin >> V >> E;
	std::vector<std::vector<long long>> mg; MakeVVT(V, V, mg, llong_max);
	rep(i, 0, E)
	{
		ll s, t, d; cin >> s >> t >> d;
		mg[s][t] = d;
	}

	vvt<ll> res;
	if (!GT_WarshallFloyd::Run(mg, res))
	{
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}

	rep(i, 0, V)
	{
		rep(j, 0, V)
		{
			if (0 < j) cout << " ";
			if (res[i][j] != llong_max) cout << res[i][j];
			else if (i == j) cout << 0;
			else cout << "INF";
		}
		cout << endl;
	}
	return 0;
}

