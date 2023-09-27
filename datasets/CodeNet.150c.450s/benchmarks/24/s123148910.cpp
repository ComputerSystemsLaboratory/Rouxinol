#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int N,M,d,p;
pair<int,int> prin[20000];
int main(){
	cin >> N >> M;
	while((N!=0)||(M!=0)) {
		for(int i=0; i<N; ++i) {
			cin >> d >> p;
			prin[i] = make_pair(-p,d);
		}
		sort(prin,prin+N);
		int money=prin[0].second;
		int k = 0;
		while(money <= M) {
			++k;
			if(k>N-1) break;
			money += prin[k].second;
		}
		if(money<=M) cout << 0 << endl;
		else {
			int ex = -prin[k].first * (money - M);
			for(int l=k+1; l<N; ++l) {
				ex += -prin[l].first * prin[l].second;
			}
			cout << ex << endl;
		}
		cin >> N >> M;
	}
}