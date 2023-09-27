#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define rep(a,t) for(int a=0;a<t;a++) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	ld x1, y1, x2, y2, x3, y3, x4, y4;
	rep(i, n) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if (x1 == x2 || x3 == x4) { if (x1 == x2 && x3 == x4) { cout << "YES" << endl; } else { cout << "NO" << endl; } continue; }
		ld katamuki[2];
		katamuki[0] = (y2 - y1) / (ld)(x2 - x1);
		katamuki[1] = (y4 - y3) / (ld)(x4 - x3);
		if (katamuki[0] == katamuki[1]) { cout << "YES" << endl; }
		else { cout << "NO" << endl; }
	}
	return 0;
}
