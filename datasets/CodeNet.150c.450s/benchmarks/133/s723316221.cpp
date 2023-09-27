#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> C(26, 0); // C[i]
vector<vector<int> > S(365, vector<int>(26, 0)); // S[d][i]
int D;
int N;

int score(vector<int> V) {
	vector<int> c = C;
	int s = 0;
	for (int d = 0; d < D; d++) {
		c[V[d]] = 0;
		s += S[d][V[d]];
		s -= accumulate(c.begin(), c.end(), 0);
		for (int i = 0; i < N; i++) {
			c[i] += C[i];
		}
		cout << s << endl;
	}
	return s;
}

int main() {
	cin >> D;
	N = 26;
	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}
	for (int d = 0; d < D; d++) {
		for (int i = 0; i < N; i++) {
			cin >> S[d][i];
		}
	}
	vector<int> V(D, 0);
	for (int d = 0; d < D; d++) {
		cin >> V[d];
		V[d]--;
/*
		int i = 0;
		for (int j = 1; j < N; j++) {
			if (S[d][i] < S[d][j]) i = j;
		}
		V[d] = i;
		*/
	}
/*
	random_device seed_gen;
	mt19937 engine(seed_gen());
	uniform_real_distribution<> dist1(0.0, 1.0);

	vector<int> newV = V;
//	cout << "cur " << score(V);
//	for (int d = 0; d < D; d++) { cout << " " << V[d]+1; }
//	cout << endl;
	int ms = score(V);
	for (int j = 0; j < 10000; j++) {
		newV = V;
		for (int k = 0; k < 1; k++) {
			newV[int(dist1(engine) * D)] = int(dist1(engine) * N);
		}
		int ns = score(newV);
//		cout << "new " << ns;
//		for (int d = 0; d < D; d++) { cout << " " << newV[d]+1; }
//		cout << endl;
		if (ms < ns) V = newV;
	}

	for (int d = 0; d < D; d++) {
		cout << V[d] + 1 << endl;
	}
	*/
	score(V);
	return(0);
}
