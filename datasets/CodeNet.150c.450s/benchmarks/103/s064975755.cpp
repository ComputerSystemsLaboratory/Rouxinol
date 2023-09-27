#include<iostream>
#include<cstring>

using namespace std;

int mark[10],n,m,ans;



void dfs(int d,int sum,int last) {
	if (d == n)  {
		if(sum==m) ans++;
		return;
	}
	else if (sum > m) return;
	for (int i = last; i < 10; i++) {
		dfs(d + 1, sum + i, i + 1);
	}
}
int main() {
	while(1){
		cin >> n >> m;
		if (n == m && n == 0) return 0;
		ans = 0;
		dfs(0, 0, 0);
		cout << ans <<endl;
	}
}
