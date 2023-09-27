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
	int Y[10000];
	for (int N, A, B, C, X; cin >> N >> A >> B >> C >> X && N;) {
		for (int i = 0; i < N; i++) {
			cin >> Y[i];
		}
		int cnt, i = 0;
		for (cnt = 0; cnt <= 10000; cnt++) {
			if (Y[i] == X) {
				i++;
				if (i == N)break;
			}
			X = (A*X + B) % C;
		}
		cout << (cnt <= 10000 ? cnt : -1) << endl;
	}
	return 0;
}