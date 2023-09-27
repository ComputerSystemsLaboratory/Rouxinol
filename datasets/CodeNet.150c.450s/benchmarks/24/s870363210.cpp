#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
	int N,M;
	pair<int,int> PD[10010];
	while(true) {

		cin >> N >> M;

		int d,p;
		if ((N == 0) && (M == 0))
			break;

		for(int i=0;i<N; i++) {
			cin >> d >> p;
			PD[i] = make_pair(p,d);
		}
		sort(PD,PD+N);

		//cout << PD[0].first <<endl;
		//return 0;


		int S = 0;
		int guarded = 0;

		for(int i=0;i<N;i++) {
			S += PD[i].first*PD[i].second;
		}
		for(int i=0;i<N;i++) {
			if(M <= 0) {
				break;
			} else if(M>PD[N-i-1].second) {
				guarded = PD[N-i-1].second;
			} else {
				guarded = M;
			}
			S -= PD[N-i-1].first*guarded;
			M -= guarded;
			
		}

	cout << S << endl;
	}

}