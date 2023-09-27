#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>

#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){

	int n,k,s,data;
	s = 0;
	
	while(cin >> n >> k, n && k){
	vector<int> sum;	

	rep(i,n){
		cin >> data;
		sum.push_back(data);
	}
	
	data = 0;

	rep(i,k){

		data += sum[i];
		
	}

	int res;
	res = data;
	
	rep(i,n - k){
		data -= sum[i];
		data += sum[i+k];
		res = max(res,data);
	}

	cout << res << endl;
	}
	
	return 0;
}