#include<iostream>
using namespace std;

int ans;
int n, m;

void dfs(int countNum, int minNum, int total){
	if(countNum == n){
		if(total == m) ans++;
	}
	else if(countNum < n){
		for(int i=minNum+1; i <= 9; i++){
			dfs(countNum+1, i, total+i);
		}
	}
}

int main(){
	while(cin >> n >> m, n || m){
		ans = 0;
		dfs(0, -1, 0);
		cout << ans << endl;
	}
}