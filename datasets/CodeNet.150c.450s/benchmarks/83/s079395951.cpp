#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define ll long long

using namespace std;

signed main(){
	int N,W; cin >> N >> W;
	vector<int> v(N), w(N);
	for(int i = 0; i < N; i++){
		cin >> v[i] >> w[i];
	}
	vector<int> now(W+1,0), prev(W+1,0);
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= W; j++){
			if(j - w[i] >= 0){
				now[j] = max(prev[j], prev[j-w[i]] + v[i]);
			}
			else now[j] = prev[j];
		}
		swap(now, prev);
	}
	cout << prev.back() << endl;

	return 0;
}


