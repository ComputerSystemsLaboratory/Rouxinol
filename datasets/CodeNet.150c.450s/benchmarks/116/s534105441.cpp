#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

int main(){

	for(int se = 0; se<5; se++){

		int n,k,B[100001],t = -999999;
		cin >> n >> k;

		if(n == 0 && k == 0)break;

		B[0] = 0;
		for(int i=0; i<n; i++){
			int a;
			cin >> a;
			B[i+1] = B[i] + a;
		}
		for(int i = 1; i+k-1<n; i++){
			t = max(B[i+k-1]-B[i-1],t);
		}
		cout << t << endl;
	}
	return 0;
}
