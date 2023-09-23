#include <iostream>
using namespace std;

int main(){
	int n, m, p, ans;
	while(1){
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0) break;

		ans = 0;
		int a;
		for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			ans += x;
			if(i == m) a = x;
		}

		if(a == 0){
			ans = 0;
		}else{
			ans = ans * (100-p) / a;
		}

		cout << ans << endl;
	}

	return 0;
}