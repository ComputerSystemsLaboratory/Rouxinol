#include<iostream>
using namespace std;

int n, s;
int ans;

void dfs(int num, int total, int minNum){
	if(num == n){
		if(total == s) ans++;
	}
	else {
		for(int i=minNum+1; i <= 9; i++){
			dfs(num+1, total+i, i);
		}
	}
}

int main(){
	while(cin >> n >> s, n||s){
		ans = 0;
		dfs(0, 0, -1);

		cout << ans << endl;
	}
}