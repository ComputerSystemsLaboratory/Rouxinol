#include <iostream>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <sstream>
#include <istream>
#include <cmath>
#include <cstdio>

using namespace std;

#define vci vector<int>
#define vcs vector<string>
#define pb push_back
#define sz size()
#define mapci map<char, int>
#define mapsi map<string, int>
#define all(x) x.begin(), x.end()

#define fora(i, a, b) for (int i=(int)a; i<(int)b; i++)
#define ford(i, a, b) for (int i=(int)a-1; i>=b; i--)
#define foraf(i, a, b, c) for (int i=(int)a; i<(int)b; i += c)
#define fordf(i, a, b, c) for (int i=(int)a-1; i>=b; i -= c)

#define vcitr vector<int>::iterator
#define vcsitr vector<string>::iterator
#define mapcitr map<char, int>::iterator
#define mapsitr map<string, int>::iterator

typedef long long ll;

int iINF = 2147483647;
ll lINF = 9223372036854775807;

template <class T> inline void dbg(T t) { cout << t << endl; }

ll k(ll n) {
	if (n <= 1) return 1;
	return n * k(n - 1);
}

int main() { int n; cin >> n; cout << k(n) << endl; return 0; }