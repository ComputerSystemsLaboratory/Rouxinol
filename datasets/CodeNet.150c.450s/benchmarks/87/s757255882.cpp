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
	/*** ランレングス圧縮ライブラリ ***/

	template <class T> struct RunLengthEncodingResult
	{	// ランレングス圧縮の結果を格納する構造体
		long long begin = 0; // 区間開始位置
		long long end = 0;   // 区間終了位置
		std::vector<T> sub;  // 区間データ
	};

	template <> struct RunLengthEncodingResult<std::string>
	{	// ランレングス圧縮の結果を格納する構造体
		long long begin = 0; // 区間開始位置
		long long end = 0;   // 区間終了位置
		std::string sub;     // 区間データ
	};

	struct DS_NyaaRLE
	{
		/**
		@brief 文字列のランレングス圧縮
		@param s 圧縮する文字列
		@param res 圧縮結果
		**/
		static void Run(std::string& s, std::vector<RunLengthEncodingResult<std::string>>& res)
		{
			res.push_back({ 0, 0, "" });
			for (long long i = 0; i < (long long)s.size(); i++)
			{
				if (i == (long long)s.size() - 1)
				{
					res.back().end = i + 1;
					res.back().sub = s.substr(res.back().begin, i + 1 - res.back().begin);
					return;
				}
				if (s[i] != s[i + 1])
				{
					res.back().end = i + 1;
					res.back().sub = s.substr(res.back().begin, i + 1 - res.back().begin);
					res.push_back({ i + 1, 0, "" });
				}
			}
		}

		/**
		@brief 配列のランレングス圧縮
		@param v 圧縮する配列
		@param res 圧縮結果
		**/
		template <class T> void Run(std::vector<T>& v, std::vector<RunLengthEncodingResult<T>>& res)
		{
			res.push_back({ 0, 0, std::vector<T>() });
			for (long long i = 0; i < (long long)v.size(); i++)
			{
				if (i == (long long)v.size() - 1)
				{
					res.back().end = i + 1;
					for (long long j = res.back().begin; j < i + 1; j++) res.back().sub.push_back(v[j]);
					return;
				}
				if (!IsSame(v[i], v[i + 1]))
				{
					res.back().end = i + 1;
					for (long long j = res.back().begin; j < i + 1; j++) res.back().sub.push_back(v[j]);
					res.push_back({ i + 1, 0, std::vector<T>() });
				}
			}
		}

		template <class T> bool IsSame(T& l, T& r)
		{	// lとrが同値かどうか調べる
			return l == r;
		}
	};
}

/**************************************/
/*********** END OF NYA LIB ***********/
/**************************************/

using namespace NyaGadget;
//using mll = NT_ModLL< 1000000007 >;
//using mll = NT_ModLL< 998244353 >;

ll NyaaCount(vvt<ll>& grid, ll H)
{
	ll res = 0;
	rep(y, 0, H) rep(n, 1, 10)
	{
		ll test = 0;
		ll maxCount = 0;
		rep(x, 0, 5)
		{
			if (grid[x][y] == n) test++;
			else test = 0;
			maxCount = max(test, maxCount);
		}
		if (3 <= maxCount)
		{
			res += n * maxCount;
			vt<ll> nyaa;
			rep(x, 0, 5) nyaa.push_back(grid[x][y]);
			std::vector<RunLengthEncodingResult<ll>> resRLE;
			DS_NyaaRLE rle;
			rle.Run(nyaa, resRLE);
			each(i, e, resRLE)
			{
				if (3 <= Size(e.sub)) rep(x, e.begin, e.end) grid[x][y] = 0;
			}
		}
	}
	return res;
}

void NyaaDelete(vvt<ll>& grid, ll H)
{
	vvt<ll> newgrid(5);
	rep(x, 0, 5) rep(y, 0, H)
	{
		if (grid[x][y] != 0) newgrid[x].push_back(grid[x][y]);
	}
	rep(x, 0, 5) newgrid[x].resize(H);
	grid.clear();
	grid = newgrid;
}


int main(void)
{
	vt<ll> ans;
	while (1)
	{
		ll H; cin >> H;
		if (H == 0) break;
		vvt<ll> grid(5);
		rep(y, 0, H) rep(x, 0, 5)
		{
			ll n; cin >> n;
			grid[x].push_back(n);
		}
		rep(x, 0, 5) reverse(all(grid[x]));

		ll test = 0;
		rep(i, 0, 10)
		{
			test += NyaaCount(grid, H);
			NyaaDelete(grid, H);
		}
		ans.push_back(test);
	}
	each(i, e, ans) cout << e << endl;
	return 0;
}

