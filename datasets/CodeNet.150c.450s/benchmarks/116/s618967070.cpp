#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n,k;
	while(cin >> n >> k , n){
		int d[100001] = {0};
		for(int i=1;i<=n;i++){
			int t;cin >> t;
			d[i] = d[i-1] + t;
		}
		int ans = 0;
		for(int i=1;i+k-1<=n;i++){
			ans = max(ans,d[i+k-1]-d[i-1]);
		}
		cout << ans << endl;
	}
}