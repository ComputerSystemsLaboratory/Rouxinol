#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> A(n);
	
	for (int i=0;i<n;i++){
		cin >> A[i];
	}
	
	vector<int> DP(n,INT_MAX);
	for(int i=0;i<n;i++){
		*lower_bound(DP.begin(),DP.end(),A[i])=A[i];
	}
	
	cout << lower_bound(DP.begin(),DP.end(),INT_MAX)-DP.begin() <<endl;
	
	return 0;
}