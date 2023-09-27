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

int m[101][101]; //[w][h]

int main()
{
	while(1) {
		int n;
		cin >> n;
		if (!n) break;
		bool half = false;
		bool foot[2] = {false, false};
		int cnt = 0;
		rep(i,0,n) {
			string s;
			cin >> s;
			if (s == "lu") foot[0] = true;
			else if (s == "ru") foot[1] = true;
			else if (s == "ld") foot[0] = false;
			else if (s == "rd") foot[1] = false;
			if (half) {
				if (foot[0] == false && foot[1] == false) {
					cnt++;
					half = false;
				}
			}
			else {
				if (foot[0] == true && foot[1] == true) {
					cnt++;
					half = true;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}