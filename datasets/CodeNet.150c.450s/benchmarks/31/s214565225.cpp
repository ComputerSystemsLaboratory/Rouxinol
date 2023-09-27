#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int main(){
	int n,minv,maxv;
	vector<int> R;
	cin >> n;
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		R.push_back(tmp);
	}
	minv = R[0];
	maxv = R[1] - R[0];
	for(int j = 1; j < n; j++){
		maxv = max(maxv,R[j]-minv);
		minv = min(minv,R[j]);
	}
	cout << maxv << endl;
	return 0;
}