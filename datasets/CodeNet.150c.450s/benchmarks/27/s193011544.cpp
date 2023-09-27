#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <iomanip>
#include <math.h> 
#include <stack>
#include <queue>
#include <bitset>
#include <cstdlib>
#include <tuple>
#include <cctype>
#include <ctype.h>
#include <set>
#include <sstream>
#include <time.h>
#include <numeric>
using namespace std;
//#define int long long
#define rep(i,s,n) for(int i = s;i<n;i++)
#define repe(i,s,n) for(int i = s;i<=n;i++)
#define rrep(i,s,n) for(int i = (n)-1;i>=(s);i--)
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define fi first
#define se second
#define chmin(a,b) a=min((a),(b))
#define chmax(a,b) a=max((a),(b))
#define l1 list[index]
#define l2 list[index - 1]
#define l3 list[index + 1]
#define iif(i,j) ((i<0 && j<0) || (i>0 && j>0)) ? true : false 
typedef long long ll;
typedef pair<int, int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
typedef pair<pint, int> P1;
typedef pair<int, pint> P2;
typedef pair<pint, pint> PP;
static const ll maxLL = (ll)1 << 62;
const ll MOD = 1000000007;
const ll INF = 1e18;
const double PI = 3.14159265359;
int ca[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

#define NIL  -1

struct MyStruct
{
	ll p = NIL;    // 親
	ll key = NIL;  // 節の番号
	ll left = NIL;       // 左の子の番号
	ll right = NIL;      // 右の子の番号
	ll val;
};

vector<MyStruct>list(500000);
vector<ll>senlist, tyulist;
ll m, root, cnt = 0;

int insert(ll no, ll cnt) {

	if (cnt == 0) {
		list[cnt].key = cnt;
		list[cnt].val = no;
		return 0;
	}

	ll x = 0, y;

	while (x != NIL)
	{
		y = list[x].key;

		if (list[x].val > no) {
			x = list[x].left;
		}
		else {
			x = list[x].right;
		}
	}

	list[cnt].p = y;
	list[cnt].key = cnt;
	list[cnt].val = no;

	if (no < list[y].val) {
		list[y].left = cnt;
	}
	else {
		list[y].right = cnt;
	}

	return 0;
}

int tyu(ll no) {

	if (no == -1) {
		return 0;
	}

	if (list[no].left == NIL && list[no].right == NIL) {
		tyulist.push_back(list[no].val);
		return 0;
	}

	tyu(list[no].left);
	
	tyulist.push_back(list[no].val);

	tyu(list[no].right);

	return 0;
}

int sen(ll no) {

	if (no == -1) {
		return 0;
	}

	if (list[no].left == NIL && list[no].right == NIL) {
		senlist.push_back(list[no].val);
		return 0;
	}

	senlist.push_back(list[no].val);

	sen(list[no].left);
	sen(list[no].right);

	return 0;
}

signed main() {
	
	cin >> m;

	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;

		ll num;
		if (s == "insert") {
			cin >> num;

			insert(num, cnt);
			cnt++;
		}
		else {
			tyu(0);
			for (int j = 0; j < tyulist.size(); j++) {
				cout << " " << tyulist[j];
			}
			vector<ll>tmplist;
			tyulist = tmplist;
			cout << endl;

			sen(0);

			for (int j = 0; j < senlist.size(); j++) {
				cout << " "  << senlist[j];

			}
			senlist = tmplist;
			cout << endl;
		}
		
	}


	return 0;
}
