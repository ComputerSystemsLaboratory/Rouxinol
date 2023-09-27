#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, M;
	while(cin >> N >> M, N){
		vector< pair<int, int> > vp(N);
		int res = 0;
		for(int i=0;i<N;i++){
			cin >> vp[i].second >> vp[i].first;
			res += vp[i].first * vp[i].second;
		}
		sort(vp.rbegin(), vp.rend());
		for(int i=0;i<N;i++){
			int dec = min(M, vp[i].second);
			res -= dec * vp[i].first;
			M -= dec;
		}
		cout << res << endl;
	}
}