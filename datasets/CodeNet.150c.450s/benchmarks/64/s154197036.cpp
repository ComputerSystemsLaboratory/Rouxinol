#include <iostream>
using namespace std;

int n,q,a[20];
bool can[2001] = {};

void dfs(int i,int sum){
	if(i == n){
		if(sum <= 2000) can[sum] = true;
		return;
	}
	dfs(i + 1,sum);
	dfs(i + 1,sum + a[i]);
}

int main() {
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	dfs(0,0);
	cin >> q;
	for(int i = 0;i < q;i++){
		int m;
		cin >> m;
		if(can[m]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}