#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <functional>

using namespace std;

typedef long long int ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, int> pli;
typedef std::pair<ll, ll> pll;

#define FOR(i,n,m) for(ll i=(ll)(m);i<(ll)(n);++i)
#define REP(i,n) FOR(i,n,0)
#define IREP(i,n) for(ll i=(ll)(n);i>=0;--i)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

struct Dice
{
	int top, left, right, up, down, bottom;
	void roll(char c)
	{
		switch (c)
		{
		case 'S':
		{
			int t = top;
			top = up;
			up = bottom;
			bottom = down;
			down = t;
		}
		break;
		case 'N':
		{
			int t = top;
			top = down;
			down = bottom;
			bottom = up;
			up = t;
		}
		break;
		case 'W':
		{
			int t = top;
			top = right;
			right = bottom;
			bottom = left;
			left = t;
		}
		break;
		case 'E':
		{
			int t = top;
			top = left;
			left = bottom;
			bottom = right;
			right = t;
		}
		break;
		default:
			break;
		}
	}
};

int main()
{
	Dice d;
	cin >> d.top >> d.down >> d.right >> d.left >> d.up >> d.bottom;
	string S;
	cin >> S;
	REP(i, S.length())
	{
		d.roll(S[i]);
	}
	cout << d.top << endl;
	return 0;
}
