#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int a[100001];
vector<int> dp = { 0 };
int n;


int makeDP(){
	dp[0] = a[0];
	for(int i = 1;i < n;i++){
		if(dp.back() < a[i]){
			dp.push_back(a[i]);
		}
		else {
			*lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
		}
	}
	return dp.size();
}


int main(){
	cin >> n;

	for(int i = 0;i < n;i++) cin >> a[i];

	cout << makeDP() << endl;

	return 0;
}