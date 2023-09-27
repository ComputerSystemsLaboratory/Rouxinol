#include <algorithm>
#include <utility> 
#include <iostream>

using namespace std;
int N, M, ans;
pair<int,int> PD[10010];
int main() {
	while (cin >> N >> M && N) {
		ans = 0;
		int d, p, m;
		m = M;
		for (int i=0; i<N; ++i) {
			cin >> d >> p;
			PD[i] = make_pair(p, d);
		}
		sort(PD,PD+N);
		for (int i=0; i<N; ++i){
			if (m <= PD[N-1-i].second || m == 0){
				ans += (PD[N-1-i].second-m)*PD[N-1-i].first;
				m = 0;
			}else{
				m -= PD[N-1-i].second;
			}
			
		}
		cout << ans << endl;
	}
}