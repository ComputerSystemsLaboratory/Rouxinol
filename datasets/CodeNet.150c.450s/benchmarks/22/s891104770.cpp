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
int ca[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int v, e, r;
ll flag[1005];
ll flag2[1005];
//vector<pair<int, int>>flag2;

struct MyStruct
{
	vector<pair<int,int>>list;
};

struct MyStruct2
{
	vector<int>list;
	vector<int>list2;
};

//MyStruct st;
MyStruct stt[1005];
//MyStruct2 stt2;


int func(int n, int sum, MyStruct2 st) {

	if (flag[n] > sum) {
		flag[n] = sum;
	}
	else {
		return 0;
	}
	
	flag2[n]++;
	

	if (flag2[n] >= 3) {
		for (int i = st.list.size() - 2; i >= 0; i--) {
			if (st.list[i] == n && st.list2[i] > sum) {
				cout << "NEGATIVE CYCLE" << endl;
				getchar();
				getchar();
				exit(0);
			}
		}
	}

	//for (int i = 0; i < clist[n].list.size(); i++) {
	for (int i = 0; i < stt[n].list.size(); i++) {
		//func(clist[n].list[i].first, sum + clist[n].list[i].second);
		//if (stt[n].list[i].first == r) continue;
		
		st.list.push_back(stt[n].list[i].first);
		st.list2.push_back( sum + stt[n].list[i].second );
		func( stt[n].list[i].first, sum + stt[n].list[i].second , st);
		st.list.pop_back();
		st.list2.pop_back();

	}


	return 0;
}


signed main() {
	int x, y, z, n, k, cnt = 0, pp, h, l;
	string s, s1, s2;
	vector<ll>list1, list2;
	

	cin >> v >> e >> r;

	//memset(flag, 0, sizeof(flag));

	for (int i = 0; i < 1005; i++) {
		flag[i] = 199999999;
	}

	//flag[r] = 0;

	vector<int>li1, li2, li3;
	vector<pair<int, pair<int,int>>>pli;
	
	for (int i = 0; i < e; i++) {
		int num1, num2, num3;
		cin >> num1 >> num2 >> num3;
		//clist[num1].list.push_back(make_pair(num2, num3));
		stt[num1].list.push_back(make_pair(num2, num3));

		/*if (flag[num1] != 199999999) {
			flag[num2] = min(flag[num1] + num3, flag[num2]);
		}*/
	/*	li1.push_back(num1);
		li2.push_back(num2);
		li3.push_back(num3);*/
		//pli.push_back(make_pair(num1, make_pair(num2, num3)));
	}

	//sort(pli.begin(), pli.end());


	for (int j = 0; j < 500; j++) {
		//
		//for (int i = 0; i < e; i++) {
		//	int num1 = pli[i].first;
		//	int num2 = pli[i].second.first;
		//	int num3 = pli[i].second.second;

		//	if (flag[num1] != 99999999999) {
		//		flag[num2] = min(flag[num1] + num3, flag[num2]);
		//	}
		//}

		//for (int i = e - 1; i >= 0; i--) {
		//	int num1 = pli[i].first;
		//	int num2 = pli[i].second.first;
		//	int num3 = pli[i].second.second;

		//	if (flag[num1] != 99999999999) {
		//		flag[num2] = min(flag[num1] + num3, flag[num2]);
		//	}
		//}

		/*for (int i = 0; i < e; i++) {
			int num1 = li1[i];
			int num2 = li2[i];
			int num3 = li3[i];

			if (flag[num1] != 99999999999) {
				flag[num2] = min(flag[num1] + num3, flag[num2]);
			}
		}*/

		/*for (int i = e - 1; i >= 0; i--) {
			int num1 = li1[i];
			int num2 = li2[i];
			int num3 = li3[i];

			if (flag[num1] != 99999999999) {
				flag[num2] = min(flag[num1] + num3, flag[num2]);
			}
		}*/
	}


	MyStruct2 st2;
	memset(flag2, 0, sizeof(flag2));

	func(r, 0, st2);

	for (int i = 0; i < v; i++) {
		if (flag[i] == 199999999) {
			cout << "INF" << endl;
		}
		else {
			cout << flag[i] << endl;
		}
	}



	
	getchar();
	getchar();
	return 0;
}
