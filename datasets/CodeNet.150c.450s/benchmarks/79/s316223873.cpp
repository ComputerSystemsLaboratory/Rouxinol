#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <cstring>

using namespace std;
const int INF = (1<<30);
typedef pair<int, int> P;
typedef long long ll;
#define PB push_back
#define rep(i, a) for (int i = 0; i < a; i++)

int sx, sy;

int gx, gy;

int qqq;

//各座標までの最短距離
int d[100][100];


//移動方向のベクトル
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };

//汎用
ll ans = 0;
pair<int, int> red[101], blue[101];
ll BIG = 10000000000;

//累乗
ll POW(ll a, ll b) {
ll c = 1;
for (int i = 0; i < b; ++i) {
c *= a;
}
return c;
}

//階乗
int Kaijou(int a) {
if (a < 2) return 1;
return a * Kaijou(a - 1);
}


int A[200000];
int kinds[200001];


int main() 
{
	int n,r;
	while(1){
		cin >> n>> r;
		if (n == 0&&r==0) break;

		vector<int> s(n);
		std::iota(s.begin(), s.end(), 1);
		reverse(s.begin(), s.end());

		rep(i, r) {
			int p, c;
			cin >> p >> c;
			int toU[100] = { 0 }, toD[100] = { 0 };
			rep(i, c) {
				toU[i] = s[p - 1 + i];
			}
			rep(i, p - 1) {
				toD[i] = s[i];
			}
			rep(i, c) {
				s[i] = toU[i];
			}
			rep(i, p - 1) {
				s[i + c] = toD[i];
			}
		}
	
		cout << s[0] << endl;
	}
	cin >> qqq;
}

