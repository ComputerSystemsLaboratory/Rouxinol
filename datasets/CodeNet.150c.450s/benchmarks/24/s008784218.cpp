#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int N,D,P;
long long int M,S,SD;
pair<int,int> DP[ 10010 ];
int main(){
	while (cin >> N >> M && N > 0) {
		S=0;
		SD = 0;
		for (int i=0; i < N ; i++) {
			cin >> D >> P;
			DP[i] = make_pair(P,D);
			S = S + D*P;
			SD = SD + D;
		}
		if (SD < M) {
			cout << "0" << endl;
		}
		else {
			sort(DP,DP+N);
			for (int j = 0; j < N; j++) {
				if ( M > 0) {
					if ( M > DP[N-1-j].second) {
						S = S - DP[N-1-j].first*DP[N-1-j].second;
						M = M - DP[N-1-j].second;
					}
					else {
						S = S - M*DP[N-1-j].first;
						M = 0;	
					}
				}
			}
			cout << S << endl;
		}
	}
}