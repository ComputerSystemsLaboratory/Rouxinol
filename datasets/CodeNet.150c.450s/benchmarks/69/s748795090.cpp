#include<iostream>
using namespace std;
int bfs(int, int, int);
int a[11];
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 < 10; i2++){
			cin >> a[i2];
		}
		a[10] = 0;
		int ans=bfs(0, 0, 0);
		if (ans == 0){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	
}
int bfs(int i, int l, int r){
	int ans = 0;
	if (i == 10){
		ans = 1;
	}
	if (l < a[i]){
		ans = bfs(i + 1, a[i], r);
	}
	if (r < a[i]){
		ans = bfs(i + 1, l, a[i]);
	}
	return ans;
}