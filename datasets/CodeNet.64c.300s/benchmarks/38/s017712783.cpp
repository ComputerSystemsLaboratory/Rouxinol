#include <iostream>
using namespace std;

int a[10];
bool flag;

void dfs(int n, int l, int r){
	if(n == 10){
		flag = true;
		return;
	}

	if(a[n] > l){
		dfs(n+1, a[n], r);
	}
	if(a[n] > r){
		dfs(n+1, l, a[n]);
	}

	return;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 10; j++){
			cin >> a[j];
		}
		flag = false;
		dfs(0, 0, 0);
		if(flag){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}