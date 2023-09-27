#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int iMax;
	cin >> iMax;
	for (int i = 0; i < iMax; ++i){
		vector<int> x;
		int t;
		for (int j = 0; j < 3; ++j){
			cin >> t;
			x.push_back(t);
		}
		sort(x.begin(), x.end());
		if (pow(x[0], 2)+pow(x[1], 2) == pow(x[2], 2)){
			cout << "YES" << endl;
		} else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}