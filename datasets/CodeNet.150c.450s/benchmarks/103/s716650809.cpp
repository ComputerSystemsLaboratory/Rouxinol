#include <iostream>
using namespace std;

int n, s, cnt;

void dfs(int i, int sum, int n){
	if(sum==s&&!n){
		cnt++;
		return;
	}
	if(i==10||!n) return;
	//使用する3つを探索
	//使用しなければカウントされない
	dfs(i+1,sum,n);
	dfs(i+1,sum+i,n-1);
}

int main(){
	while(cin >> n >> s, n!=0||s!=0){
		cnt = 0;
		dfs(0, 0, n);
		cout << cnt << endl;
	}
	
	return 0;
}