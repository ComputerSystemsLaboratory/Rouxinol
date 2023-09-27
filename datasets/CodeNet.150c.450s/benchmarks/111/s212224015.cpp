#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
typedef long long int lli;
using namespace std;
lli dp[100][21];
int main(){
	int n;
	cin >> n;
	vector<int> vi(n-1);
	int last;
	for(int i=0; i<n-1; ++i){
		cin >> vi[i];
	}
	cin >> last;
	dp[0][vi[0]]=1;
	for(int i=1; i<n-1; ++i){
		for(int sum=0; sum<=20; ++sum){
			if(sum-vi[i]>= 0){
				dp[i][sum]+=dp[i-1][sum-vi[i]];
			}
			if(sum+vi[i]<=20){
				dp[i][sum]+=dp[i-1][sum+vi[i]];
			}
		}
	}
	cout << dp[n-2][last] << "\n";
	return 0;
}