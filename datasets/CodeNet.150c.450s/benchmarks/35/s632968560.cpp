#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solve(){
	int N;
	cin >> N;
	if(!N)return 1;
	vector<int> vec(N),dp(N);
	for(int i=0;i<N;i++)cin >> vec[i];
	dp[0]=vec[0];
	for(int i=1;i<N;i++)dp[i]=max(dp[i-1]+vec[i],vec[i]);
	cout << *max_element(dp.begin(),dp.end()) << endl;
	return 0;
}
int main(){
	while(!solve()){}
	return 0;
}