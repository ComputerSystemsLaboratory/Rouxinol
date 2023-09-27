#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

int main(){
	while(true){
		int N, M;
		cin >> N >> M;
		if(N == 0 && M == 0){ break; }
		vector<pii> r(N);
		for(int i = 0; i < N; ++i){
			cin >> r[i].second >> r[i].first;
		}
		sort(r.begin(), r.end());
		ll answer = 0;
		for(int i = N - 1; i >= 0; --i){
			if(r[i].second <= M){
				M -= r[i].second;
			}else{
				answer += (r[i].second - M) * r[i].first;
				M = 0;
			}
		}
		cout << answer << endl;
	}
	return 0;
}