#include "bits/stdc++.h"
using namespace std;

map<char, int> mp;
string C = "ixcm";

int main() {
	mp['m'] = 3;
	mp['c'] = 2;
	mp['x'] = 1;
	mp['i'] = 0;
	int N;
	cin >> N;
	for (int t = 0; t < N; t++) {
		string S, T;
		cin >> S >> T;
		int A[4] = {}, B[4] = {};
		for (int i = 0; i < S.size();) {
			if ('2' <= S[i] && S[i] <= '9') {
				A[mp[S[i + 1]]] = S[i] - '0';
				i += 2;
			}
			else {
				A[mp[S[i]]] = 1;
				i += 1;
			}
		}
		for (int i = 0; i < T.size();) {
			if ('2' <= T[i] && T[i] <= '9') {
				B[mp[T[i + 1]]] = T[i] - '0';
				i += 2;
			}
			else {
				B[mp[T[i]]] = 1;
				i += 1;
			}
		}
		for (int i = 0; i < 4; i++) {
			A[i] += B[i];
			if (A[i] >= 10) A[i] -= 10, A[i + 1]++;
		}
		string ANS = "";
		for (int i = 3; i >= 0; i--) {
			if (A[i] == 0) continue;
			else if (A[i] == 1) ANS += C[i];
			else {
				ANS += '0' + A[i];
				ANS += C[i];
			}
		}
		cout << ANS << endl;
	}
}
