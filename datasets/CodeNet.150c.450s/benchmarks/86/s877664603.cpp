#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int main() {
	int s, a;
	for (int N, M, P; cin >> N >> M >> P&&N;) {
		s = 0;
		for (int i = 1; i <= N; i++) {
			int X; cin >> X;
			s += X;
			if (i == M)	a = X;
		}
		cout << (a ? s*(100 - P) / a : 0) << endl;
	}
	return 0;
}