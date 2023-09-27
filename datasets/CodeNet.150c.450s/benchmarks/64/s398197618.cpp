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
int F[MAX_N];
int NS;
int NT;
int S[MAX_N];
int T[MAX_N];

bool flag;
int target;

void print(int F[], int N){
	rep(i, N){ cout << F[i] << " "; }
	cout << endl;
}

void Judge(int A[], int F[], int N){
	int ret = 0;
	rep(i, N){ ret += A[i] * F[i]; }
	if (ret == target) flag = true;
}

void rec(int A[], int F[], int N, int i){
	if (i == N) {
		Judge(A, F, N);
		return;
	}

	F[i] = 0;
	rec(A, F, N, i + 1);

	F[i] = 1;
	rec(A, F, N, i + 1);

};


int main() {

	cin >> NS;
	rep(i, NS){ cin >> S[i]; }
	cin >> NT;
	rep(i, NT){ cin >> T[i]; }

	rep(i, NT){
		flag = false;
		target = T[i];
		rec(S, F, NS, 0);
		cout << (flag ? "yes" : "no") << endl;
	}
}