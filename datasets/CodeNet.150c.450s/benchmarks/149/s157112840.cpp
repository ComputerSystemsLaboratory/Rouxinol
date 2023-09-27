#include<iostream>
#include<vector>
using namespace std;
#define MAX_N 114514
vector<int> X[MAX_N];int Group[MAX_N], N, Q, A, B, C;
int main() {
	cin >> N >> Q;
	for (int i = 0; i < MAX_N; i++) { X[i].push_back(i); Group[i] = i; }
	for (int i = 0; i < Q; i++) {
		cin >> A >> B >> C;
		int D = Group[B], E = Group[C];
		if (A == 0 && D != E) {
			if (X[D].size() >= X[E].size()) {
				for (int j = 0; j < X[E].size(); j++) {
					Group[X[E][j]] = D; X[D].push_back(X[E][j]);
				}
				X[E].clear();
			}
			else if (X[D].size() < X[E].size()) {
				for (int j = 0; j < X[D].size(); j++) {
					Group[X[D][j]] = E; X[E].push_back(X[D][j]);
				}
				X[D].clear();
			}
		}
		if (A == 1) {
			if (D == E) { cout << "1" << endl; }
			else { cout << "0" << endl; }
		}
	}
	return 0;
}