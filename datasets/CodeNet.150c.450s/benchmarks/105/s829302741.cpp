#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include <random>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <array>
#include <cassert>
#include <bitset>
#include <cstdint>
using namespace std;
using LL = long long;


int main() {
	int T;
	cin >> T;
	for (int test = 0; test < T; test++) {
		int N;
		cin >> N;
		vector<LL>A(N);
		string S;
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}
		cin >> S;
		set<LL, greater<LL>>K;
		LL ans = 0;
		for (int i = N - 1; i >= 0; i--) {
			if (S[i] == '0') {
				if (K.count(A[i])) {

				}
				else {
					K.insert(A[i]);
					set<LL, greater<LL>>::iterator itr = K.begin();
					while (next(itr) != K.end()) {
						auto ntr = next(itr);
						LL tmp = 1LL << 61;
						while ((tmp & *itr) == 0) {
							if (tmp == 1) {
								tmp = 0;
								break;
							}
							tmp >>= 1;
						}
						if (*ntr & tmp) {
							LL iv = *itr;
							LL nv = *ntr;
							K.erase(nv);
							K.insert(nv ^ iv);
							itr = K.lower_bound(iv);
							ntr = next(itr);
						}
						else {
							itr = ntr;
							ntr = next(ntr);
						}
					}
					if (K.count(0))K.erase(0);
				}

			}
			else {
				LL kas = A[i];
				LL tmp = 1LL << 61;
				for (auto elm : K) {
					while ((tmp & elm) == 0) {
						tmp >>= 1;
						if (tmp == 0)break;
					}
					if (kas & tmp) {
						kas ^= elm;
					}
				}
				if (kas) {
					ans = max(ans, 1LL);
					break;
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
