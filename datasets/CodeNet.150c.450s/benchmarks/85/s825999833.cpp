#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;
const int MAX_L = 10000;
int N;

struct Matrix{ int R, W; };
Matrix M[MAX_N];

int mem[MAX_L][MAX_L];
Matrix memM[MAX_L][MAX_L];


void eval(Matrix M[], int s, int e){

	if (s == e){
		mem[s][e] = 0;
		memM[s][e] = M[s];
		return;
	}

	int minval = 1000000000;
	for (int mid = s; mid < e; mid++){
		Matrix m1 = memM[s][mid];
		Matrix m2 = memM[mid+1][e];
		int val = mem[s][mid] + mem[mid+1][e] + (m1.W * m1.R * m2.W);
		
		if (val < minval){
			minval = val;
			mem[s][e] = val;
			Matrix m; m.R = m1.R; m.W = m2.W;
			memM[s][e] = m;
		}
	}

}

int solve(Matrix M[], int N){

	for (int d = 0; d <= N; d++)
		for (int s = 0; s + d <= N; s++)
		{
			eval(M, s, s + d);
		}

	return mem[0][N - 1];
}

int main() {

	cin >> N;
	rep(i, N){
		Matrix m;
		cin >> m.R;
		cin >> m.W;
		M[i] = m;
	}

	cout << solve(M, N) << endl;

#ifdef DEBUGRUN
	rep (i, N){
		rep(j, N){
			cerr << mem[i][j] << ' ';
		}
		cerr << endl;
	}
#endif

}