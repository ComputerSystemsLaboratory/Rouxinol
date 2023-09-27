#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int> a){
	vector<int> dp;
	const int infi=1e9+7;
	int n = a.size();
	dp.resize(n);
	fill(dp.begin(),dp.end(),infi);
	for(int i=0;i<n;i++){
		*lower_bound(dp.begin(),dp.end(),a[i])=a[i];
	}
	int ans = lower_bound(dp.begin(),dp.end(),infi)-dp.begin();
	return ans;
}
  
  
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x:v)cin>>x;
	cout << LIS(v) << endl;
}
