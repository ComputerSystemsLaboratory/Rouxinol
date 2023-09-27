#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	while(1){
		int n; cin >> n;
		if(!n)  break;

		int a[1001];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int ans = 5000000;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				ans = min(ans, abs(a[i]-a[j]));
			}
		}
		cout << ans << endl;
	}
}
