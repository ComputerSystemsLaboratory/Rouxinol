#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m && n > 0){
		vector<int> h(n);
		vector<int> w(m);
		for(int i = 0; i < n; i++)
			cin >> h[i];
		for(int i = 0; i < m; i++)
			cin >> w[i];
		int ans = 0;
		int x,y;
		// for(int i = 0; i < n; i++){
			// for(int j = i; j < n; j++){
			// 	// ?§??????¨??????????±???????
			// 	x = 0;
			// 	for(int k = i; k <= j; k++){
			// 		x += h[k];
			// 	}

			// 	for(int l = 0; l < m; l++){
			// 		y = 0;
			// 		for(int p = l; p < m; p++){
			// 			y += w[p];
			// 			if(y == x){
			// 				ans++;
			// 				break;
			// 			}
			// 		}
			// 	}
			// }
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				int p = i;
				int q = j;
				x = 0;
				y = 0;
				while(true){
					if(x >= y){
						y += w[q];
						q++;
						if(q > m) break;
					}else{
						x += h[p];
						p++;
						if(p > n) break;
					}
					// cout << i << " " << p << " " << j << " " << q << " " << endl;
					// cout << x << " " << y << endl;
					if(x == y){
						// cout << "!!!" << endl;
						ans++;
					}
				}
			}
		}
		cout << ans << endl;
	}
}