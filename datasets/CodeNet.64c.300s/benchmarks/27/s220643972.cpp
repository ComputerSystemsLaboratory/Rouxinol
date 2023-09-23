#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define INF 100000000
#define EPS 1e-10
#define MOD 1000000007
using namespace std;
typedef pair<int,int> P;

int n, x;

int main(){
	while(cin >> n >> x){
		if(n == 0 && x == 0) break;
		int ans = 0;
		for(int i = 1; i <= n; i++){
			for(int j = i+1; j <= n; j++){
				for(int k = j+1; k <= n; k++){
					if(i+j+k == x) ans++;
				}
			}
		}
		cout << ans << endl;
	}
}