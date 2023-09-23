#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

int main()
{
	int n;
	cin >> n;

	const int x = 195;
	const int mx = 200;

	rep(i,0,n) {
		int y, m, d, sum = 0;
		cin >> y >> m >> d;

		if (y==1000 && m==1 && d==1) {
			cout << 0 << endl;
			continue;
		}

		// y+1, 1m, 1d
		if (y % 3) { // noramal
			if (m % 2) { // dai
				sum += 21 - d;
				d = 1;
				m = m % 10 + 1;
			}
			else { // syou
				sum += 20 - d;
				d = 1;
				m = m % 10 + 1;
			}

			if (m > 1) {
				while (m < 11) {
					if (m % 2) {
						sum += 20;
						m++;
					}
					else {
						sum += 19;
						m++;
					}
				}
			}
			m = 1;
			y++;
		}
		else { // all dai
			sum += 21 - d;
			m = m % 10 + 1;
			d = 1;
			if (m > 1) {
				sum += (11 - m) * 20;
				m = 1;
			}
			y++;
		}
		//debug(sum);
		if (y==1000 && m==1 && d==1) {
			cout << sum << endl;
			continue;
		}

		int l = 1000 - y;
		sum += l * x;
		sum += (l+2)/3 * 5;
		cout << sum << endl;
	}

	return 0;
}