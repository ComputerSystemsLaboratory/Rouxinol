#include <iostream>
#include <string.h>
using namespace std;

int h_count[1500 * 1000 + 1], w_count[1500 * 1000 + 1];


int main() {
	int n, m;
	while(cin >> n >> m && (n || m)){
		int h[1501] = {0}, w[1501] = {0};
		for(int i = 1; i <= n; ++i){
			cin >> h[i];
			h[i] += h[i - 1];
		}
		for(int i = 1; i <= m; ++i){
			cin >> w[i];
			w[i] += w[i - 1];
		}
		memset(h_count, 0, sizeof(h_count));
		memset(w_count, 0, sizeof(w_count));
		for(int i = 0; i < n; ++i)
			for(int j = i + 1; j <= n; ++j)
				h_count[h[j] - h[i]]++;
				
		for(int i = 0; i < m; ++i)
			for(int j = i + 1; j <= m; ++j)
				w_count[w[j] - w[i]]++;
		
		int ans = 0;
		for(int i = 1; i <= 1500 * 1000; ++i)
			ans += (h_count[i] * w_count[i]);
			
		cout << ans << endl;
	}
	return 0;
}