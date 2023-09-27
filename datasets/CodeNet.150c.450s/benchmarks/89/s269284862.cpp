#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <sstream>
#include <list>
#include <map>
#include <functional>
#include <iterator>

#define rep(i,p,n) for(int i=(int)p;i<(int)n;i++)
#define repp(i,p,n) for(int i=(int)p;i>=(int)n;i--)
#define Sort(x) sort(x.begin(),x.end())
#define PSort(x) sort(begin(x), end(x), pairCompare)
#define ll long long
#define INF 2000000000
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.14159265358979
int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
using namespace std;

int main(){	
	while (1) {
		int a, d, n,x;
		cin >> a >> d >> n;
		if (a == 0 && a == d&&d == n)break;

		int count = 0;
		for (int i = 0; count != n; i++) {
			x = a + d * i;
			bool f = true;
			if (x < 2)continue;
			else if (x == 2) {
				count++;
				continue;
			}
			else {
				if (x % 2 == 1) {
					for (int j = 3; j <= sqrt(x); j += 2) {
						if (x%j == 0) {
							f = false;
							break;
						}
					}
				}
				else f = false;
			}
			if (f)count++;
		}
		cout << x << endl;
	}

	return 0;
}