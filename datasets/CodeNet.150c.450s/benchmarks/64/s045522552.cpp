#include <iostream>
using namespace std;

int n,q,a[20],m;
bool flag;

void dfs(int i,int sum){
	if(i == n){
		if(m == sum) flag = true;
		return;
	}
	dfs(i + 1,sum);
	dfs(i + 1,sum + a[i]);
}

int main() {
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	cin >> q;
	for(int i = 0;i < q;i++){
		cin >> m;
		flag = false;
		dfs(0,0);
		if(flag) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}