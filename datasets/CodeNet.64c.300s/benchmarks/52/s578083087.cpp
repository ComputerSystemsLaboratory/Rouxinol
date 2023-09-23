#include <iostream>
using namespace std;

int ans = 0;

void dfs(int n, int s, int k){
	if( s < 0 ) return;
	
	if( n == 0 ){
		if( s == 0 ) ans++;
	}else{
		if( 9 < k ) return;
		for(int i = k; i <= 9; i++){
			dfs(n-1, s - i, i + 1);
		}
	}
}

int main(){
	int n, s;
	while( cin >> n >> s, n || s ){
		ans = 0;
		dfs(n, s, 0);
		cout << ans << endl;
	}
}