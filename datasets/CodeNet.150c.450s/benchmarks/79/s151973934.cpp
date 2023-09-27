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

int A[101];
int B[101];
int C[101];

int main()
{
	int n, r; 
	while(1) {
		cin >> n >> r;
		if (!n && !r) break;
		rep(i,0,n) A[i] = n-i;
		rep(i,0,r) {
			int t, c; cin >> t >> c;
			t--;
			// ??????
			rep(j,0,t) B[j] = A[j];
			rep(j,t,t+c) C[j-t] = A[j];
			// ??????
			rep(j,0,c) A[j] = C[j];
			rep(j,c,c+t) A[j] = B[j-c];
		}
		cout << A[0] << endl;
	}

 	return 0;
}