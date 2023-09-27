#include <iostream>
using namespace std;

int balls[10];

int dfs(int i, int a, int b){
	if(i >= 10)
		return 1;
	
	int res = 0;
	if(a < balls[i])
		res |= dfs(i + 1, balls[i], b);
	if(b < balls[i])
		res |= dfs(i + 1, a, balls[i]);
	return res;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < 10; ++j)
			scanf("%d", &balls[j]);
		int ans = dfs(0, 0, 0);
		if(ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}