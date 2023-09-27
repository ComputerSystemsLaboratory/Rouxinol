#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()

using namespace std;

signed main(){
	vector<int> inp(28);
	for(auto &&e: inp) cin >> e;
	vector<bool> tab(31, false);
	for(auto e: inp) tab[e] = true;
	for(int i = 1; i <= 30; i++){
		if(!tab[i])cout << i << endl;
	}

	return 0;
}


