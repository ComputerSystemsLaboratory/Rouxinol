#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
 
int main() {
 
	long long n, MAX=-1000000000;
	cin >> n;
	vector<int> R(n);

	/* 株価の値を入力 */
	for(int i = 0; i < n; i++){
		cin >> R[i];
	}

	/* 株価の最大値を探す */
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(MAX < R[j]-R[i]) MAX = R[j]-R[i];
			if(R[i]>=R[j])break;
		}
	}

	cout << MAX << endl;
 
	return 0;
}
 

