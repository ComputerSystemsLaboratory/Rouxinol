#include <iostream>
#include <utility>
#include <vector>
#include<algorithm>
using namespace std;

int N, M;



bool cmp1(pair<int, int>a, pair<int, int>b)
{
	return a.second < b.second;
}                                                                                                                                                                                     

int main() {
	while (cin >> N >> M && N) {
		int d, p;
		int E = 0;
		int P = 0;
		vector< pair<int, int> >vec;
		vec.clear();
		for (int i = 0; i < N; ++i) {
			cin >> d >> p;
			E += d;
			vec.push_back({ d , p });
		}
		E -= M;
		sort(vec.begin(), vec.end(), cmp1);
		for (int i = 0; E > 0 && i< vec.size(); i++) {
			int d = vec[i].first;
			int p = vec[i].second;
			if (E > d) {
				E -= d;
				P += d * p;
			}
			else {
				P += E * p;
				E = 0;
			}
		}
		cout << P << endl;

	}
	return 0;
}

