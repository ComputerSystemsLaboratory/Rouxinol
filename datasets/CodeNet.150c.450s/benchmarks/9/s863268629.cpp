#include <bits/stdc++.h>
using namespace std;

int main(){
	string card;
	string right;
	string left;
	int n;
	int m;

	while(cin >> card, card != "-"){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> m;
			right = card.substr(0,m);
			left = card.substr(m);
			card = left + right;
		}
		cout << card << endl;
	}
	return 0;
}