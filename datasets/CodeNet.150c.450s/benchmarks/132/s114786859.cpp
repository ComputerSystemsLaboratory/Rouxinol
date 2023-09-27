#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
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
	int n, pp;
	while(1) {
		cin >> n >> pp;
		if (!n && !pp) break;
		map<int, int> have;
		int player = 0;
		int p = pp;
		while(1) {
			if(p) {
				have[player]++;
				p--;
				if (have[player] == pp) {
					cout << player << endl;
					break;
				}
			}
			else {
				p = have[player];
				have[player] = 0;
			}

			player++;
			if (player == n) player = 0;

		}
	}

 	return 0;
}