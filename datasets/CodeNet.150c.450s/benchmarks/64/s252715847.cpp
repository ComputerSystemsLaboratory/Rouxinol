#include <iostream>
#include <cstdio>
using namespace std;
bool dp[2001];

int main(){
	int n, m, t;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d", &t);
		for(int j = 2000;j >= 0;j--)if(dp[j])dp[j+t] = true;
		dp[t] = true;
	}
	scanf("%d", &m);
	while(m--){
		cin >> t;
		cout << (dp[t] ? "yes" : "no") << endl;
	}
	
	return 0;
}