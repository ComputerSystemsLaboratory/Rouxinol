#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int a, l;
	while(1){
		cin >> a >> l;
		if(a == 0 && l == 0) break;

		vector<int> an;
		an.push_back(a);
		int i = 1;
		int flag = 0;
		while(1){
			vector<int>::iterator ite = an.end() -1;
			int ai = *ite;

			vector<int> digit;
			for(int k = 0; k < l; k++){
				digit.push_back(ai % 10);
				ai /= 10;
			}

			sort(digit.begin(), digit.end());
			int aimax = 0;
			int di = 1;
			ite = digit.begin();
			while(ite != digit.end()){
				aimax += (*ite) * di;
				di *= 10;
				ite++;
			}
			int aimin = 0;
			di /= 10;
			ite = digit.begin();
			while(ite != digit.end()){
				aimin += (*ite) * di;
				di /= 10;
				ite++;
			}

			ai = aimax - aimin;
			ite = an.begin();
			int j = 0;
			while(ite != an.end()){
				if(ai == *ite){
					flag = 1;
					break;
				}
				ite++;
				j++;
			}
			an.push_back(ai);

			if(flag){
				cout << j << ' ' << ai << ' ' << i-j << endl;
				break;
			}
			i++;

		}
	}

	return 0;
}