#include <iostream>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, m;
	int tmp;
	int sum_tarou, sum_hanako;
	bool frag;

	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0){
			break;
		}

		int t_change = 101, h_change = 101;
		frag = true;
		vector<int> tarou;
		vector<int> hanako;

		for(int i = 0; i < n; i++){
			cin >> tmp;
			tarou.push_back(tmp);
		}
		for(int i = 0; i < m; i++){
			cin >> tmp;
			hanako.push_back(tmp);
		}
		sum_tarou = accumulate(tarou.begin(), tarou.end(), 0);
		sum_hanako = accumulate(hanako.begin(), hanako.end(), 0);

		int diff = sum_tarou - sum_hanako;
		if(diff % 2 != 0){
			cout << "-1" <<endl;
			continue;
		}

		for(auto itr = tarou.begin(); itr != tarou.end(); ++itr){
			vector<int>::iterator citer = find(hanako.begin(), hanako.end(), *itr - diff/2);
			if(citer != hanako.end()){
				frag = false;
				if(*itr + *citer < t_change + h_change){
					t_change = *itr;
					h_change = *citer;
				}
			}
		}
		if(frag){
			cout << "-1" << endl;
		}else{
			cout << t_change << " " << h_change << endl;
		}
	}
	return 0;
}