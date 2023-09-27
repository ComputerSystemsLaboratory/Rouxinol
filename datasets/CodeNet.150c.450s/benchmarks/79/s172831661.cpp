#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int n, r;
		vector<int> card;
		cin >> n >> r;
		if(n == 0 && r == 0) break;

		for(int i=n; i>=1; i--){
			card.pb(i);
		}
		for(int i=0; i<r; i++){
			int p, c;
			cin >> p >> c;
			vector<int> tmp;

			for(int i=p-1; i< p-1+c; i++){
				tmp.pb(card[i]);
			}
			for(int i=0; i < p-1; i++){
				tmp.pb(card[i]);
			}
			for(int i=p-1+c; i < card.size(); i++){
				tmp.pb(card[i]);
			}

			card = tmp;
		}
		cout << card[0] << endl;
	}
	
	return 0;
}