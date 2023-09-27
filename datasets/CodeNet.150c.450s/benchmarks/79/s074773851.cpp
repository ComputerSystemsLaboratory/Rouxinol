#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, r;
	while(1){
		cin >> n >> r;
		if(n == 0 && r == 0) break;

		vector<int> card;
		vector<int> card2;
		for(int i=n; i>0; i--){
			card.push_back(i);
		}

		for(int i=0; i<r; i++){
			int p, c;
			cin >> p >> c;
			p--;
			for(int j=p; j<p+c; j++){
				card2.push_back(card[j]);
			}
			for(int j=0; j<p; j++){
				card2.push_back(card[j]);
			}
			for(int j=p+c; j<n; j++){
				card2.push_back(card[j]);
			}
			card = card2;
			card2.clear();

			/*
			for(int j=0; j<n; j++){
				printf("%d ", card[j]);
			}
			puts("");
			*/
		}

		cout << card[0] << endl;



	}


	return 0;
}