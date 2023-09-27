#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int m, min, max;
	while(cin >> m >> min >> max, m || min || max){
		vector<int> data(m);
		for(int i = 0; i < m; i++){//input
			cin >> data[i];
		}

		pair<int, int> a = make_pair(0, 0);
		for(int i = min; i <= max; i++){
			int tmp = data[i-1] - data[i];
			
			if(tmp >= a.second){
				a.first = i;
				a.second = tmp;
			}
		}

		cout << a.first<< endl;
	}

	return 0;
}
