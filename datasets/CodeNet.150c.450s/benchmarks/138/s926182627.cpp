/*
 * GreatestCommonDivisor.cpp
 *
 *  Created on: 2014/08/15
 *      Author: WanWan1985
 */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

// for util
#define ALL(a)			(a).begin(), (b).end()
#define FOR(i, a, b) 	for(int i = (a); i < (b); i++)
#define REP(i, n)		FOR(i, 0, n)
#define PB				push_back
#define MP				make_pair
#define CL				clear
#define EXIT			(0)

typedef unsigned int u_int;
typedef long long ll;

int gcd(ll x, ll y);

// 2つの自然数a,bを入力とし、それらの最大公約数を求めるプログラム
int main(void) {

	ll a,b;
	cin >> a >> b;

	cout << gcd(a, b) << endl;

	return EXIT;
}

int gcd(ll x, ll y) {

	if (x < y) {
		ll tmp = y;
		y = x;
		x = tmp;
	}

	while (y > 0) {
		ll r = x % y;
		x = y;
		y = r;
	}

	return x;
}