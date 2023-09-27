//--------------------------------------------------template----------------------------------------//
//c
#include <stdio.h>
#include <time.h>
#include <math.h>
//c++
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <complex>
#include <cmath>
//c++11
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
//#define sort(v,n) sort(v,v+n)
//#define vsort(v) sort(v.begin(),v.end())
#define vvsort(v) sort(v.rbegin(),v.rend())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n;

int main() {
	while (cin >> n) {
		ll cont = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < 10; k++) {
					for (int l = 0; l < 10; l++) {
						if (i + j + k + l == n)cont++;
					}
				}
			}
		}
		cout << cont << endl;
	}
}