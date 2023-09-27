#include "bits/stdc++.h"
using namespace std;

int Dist(pair<int, int> P) { return P.first * P.first + P.second * P.second; }

int main() {
	vector<pair<int, int> > V;
	for (int i = 1; i <= 150; i++) {
		for (int j = i + 1; j <= 150; j++) {
			V.push_back({ i, j });
		}
	}
	sort(V.begin(), V.end(), [](pair<int, int> P1, pair<int, int> P2) {return Dist(P1) == Dist(P2) ? P1.first * P1.second < P2.first * P2.second : Dist(P1) < Dist(P2); });
	int H, W;
	while (cin >> H >> W) {
		if (H == 0 && W == 0) return 0;
		for (int i = 0; ; i++) {
			if (V[i].first == H && V[i].second == W) {
				cout << V[i + 1].first << ' ' << V[i + 1].second << endl;
				break;
			}
		}
	}
}
