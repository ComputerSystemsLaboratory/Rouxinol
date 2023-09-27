#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int n;
	while(cin >> n, n){
		//n++;
		vector<int> dp(n), vec(n);
		//t[0] = 0;
		/*for(int i = 1;i < n;i++){
			cin >> v[i];
			t[i] = max(t[i-1]+v[i], v[i]);
		}*/
		for(int i=0;i<n;i++)cin >> vec[i];
		dp[0]=vec[0];
		for(int i=1;i<n;i++)dp[i]=max(dp[i-1]+vec[i],vec[i]);
		cout << *max_element(dp.begin(), dp.end()) << endl;
	}
	return 0; 
}

/*
7
-5
-1
6
4
9
-6
-7
*/