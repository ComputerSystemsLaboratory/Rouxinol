#include<iostream>
#include<vector>
#include<queue>

using namespace std;



int main(){
	while(1){
		int n,a,b,c,x; cin >> n >> a >> b >> c >> x;
		if (n + a + b + c + x == 0)break;
		vector<int> rand(n);
		for (int i = 0; i < n; i++){	
			cin >> rand[i];
		}
		int look = 0;
		int ans = 0;
		for (int i = 0; i <= 10000; i++){
			ans = i;
			if (rand[look] == x) look++;
			x = (a * x + b) % c;
			if (look == rand.size()) break;
		}
		if (look < rand.size()){
			cout << -1 << endl;
		}else{
			cout << ans << endl;
		}
	}


return 0;
}