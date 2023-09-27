 /*
ЗАПУСКАЕМ 
░ГУСЯ░▄▀▀▀▄░РАБОТЯГУ░░
▄███▀░◐░░░▌░░░░░░░
░░░░▌░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▐░░░░░▐░░░░░░░
░░░░▌░░░░░▐▄▄░░░░░
░░░░▌░░░░▄▀▒▒▀▀▀▀▄
░░░▐░░░░▐▒▒▒▒▒▒▒▒▀▀▄
░░░▐░░░░▐▄▒▒▒▒▒▒▒▒▒▒▀▄
░░░░▀▄░░░░▀▄▒▒▒▒▒▒▒▒▒▒▀▄
░░░░░░▀▄▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▀▄
░░░░░░░░░░░▌▌░▌▌░░░░░
░░░░░░░░░░░▌▌░▌▌░░░░░
░░░░░░░░░▄▄▌▌▄▌▌░░░░░ 
 */
#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <stack>
#include <deque>
#include <random>


using namespace std;
template<typename T1, typename T2> inline void chkmin(T1 &a, T2 b) {if (a > b) a = b;}
template<typename T1, typename T2> inline void chkmax(T1 &a, T2 b) {if (a < b) a = b;}
#define files(FILENAME) read(FILENAME); write(FILENAME)
#define read(FILENAME) freopen((FILENAME + ".in").c_str(), "r", stdin)
#define write(FILENAME) freopen((FILENAME + ".out").c_str(), "w", stdout)
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c).size()
#define left left228
#define right right228
#define y1 y1228
#define mp make_pair
#define pb push_back
#define y2 y2228
#define rank rank228
using ll = long long;
using ld = long double; 
const string FILENAME = "input";
const int MAXN = 370;


int d;
int t[MAXN];
int c[MAXN];
int s[MAXN][26];
int last[MAXN];


ll calcCost() {
	for (int i = 1; i <= 26; i++) {
		last[i] = 0;
	}
	ll sat = 0;
	for (int i = 1; i <= d; i++) {
		sat += s[i][t[i]];
		last[t[i]] = i;
		for (int j = 1; j <= 26; j++) {
			sat -= c[j] * (i - last[j]);
		}
		cout << sat << '\n';
	}
	return sat;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 	//read(FILENAME);
	cin >> d;
	for (int i = 1; i <= 26; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= d; i++) {
		for (int j = 1; j <= 26; j++) {
			cin >> s[i][j];
		}
	}
	for (int i = 1; i <= d; i++) {
		cin >> t[i];
	}	
	calcCost();
	return 0;	 	
}
