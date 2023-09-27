#include <iostream>
using namespace std;

int main(void){
	int n;
	while(cin >> n,n){
		int a[1010];
		for(int i = 0; i < n;++i) cin >> a[i];
		int ans = abs(a[0]-a[1]);

		for(int i = 0; i < n;++i)
			for(int j = i +1 ; j < n; ++ j)
				ans = min(ans,abs(a[i]-a[j]));
		cout << ans << endl;
	}
	return 0;
}