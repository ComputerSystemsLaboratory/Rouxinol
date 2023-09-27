#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <functional>
#include <cassert>
#include <iomanip>
#include <array>
#include <time.h>
#include <limits.h>
#pragma comment(lib, "winmm.lib")
#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)
using namespace std;

vector<int>  A(100001);
vector<int> L(100001, (1 << 30));

void Hoge(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	int n;
	string str1;

	cin >> n;
	rep(i, n) cin >> A[i];

	L.at(0) = A.at(0);
	int length = 1;
	for (int i = 1; i < n; i++){
		*lower_bound(L.begin(), L.end(), A[i]) = A[i];
	}

	int ans = (int)distance(L.begin(), lower_bound(L.begin(), L.end(), (1 << 30)));
	cout << ans << endl;

}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	Hoge();
	return 0;
}