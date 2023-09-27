#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef pair<int, int> P;

int main()
{
	int N, n, d, U, D, L, R;
	while (cin >> N, N) {
		U = D = L = R = 0;
		vector<P> vc(N,P(0,0));
		for (int i = 1; i < N; i++) {
			cin >> n >> d;
			switch (d) {
			case 0:
				vc[i] = P(vc[n].first - 1, vc[n].second);
				if (vc[i].first < L)
					L = vc[i].first;
				break;
			case 1:
				vc[i] = P(vc[n].first, vc[n].second + 1);
				if (vc[i].second > D)
					D = vc[i].second;
				break;
			case 2:
				vc[i] = P(vc[n].first + 1, vc[n].second);
				if (vc[i].first > R)
					R = vc[i].first;
				break;
			case 3:
				vc[i] = P(vc[n].first, vc[n].second - 1);
				if (vc[i].second < U)
					U = vc[i].second;
				break;
			}
		}
		cout << R - L + 1 << " " << D - U + 1 << endl;
	}
	return 0;
}