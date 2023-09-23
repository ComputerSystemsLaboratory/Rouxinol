#include <iostream>
#include <algorithm>
using namespace std;

int n, a[5001], sum[5001];

// a[i] + a[i+1] + ... + a[j] テ」ツつ津ィツソツ氾」ツ?? (テァツエツッテァツゥツ催・ツ陳?
int f(int i, int j){
	return sum[i] - sum[j+1];
}

int main(){
	while( cin >> n, n ){
		for(int i = 0; i < n; i++) cin >> a[i];
		
		sum[0] = 0;
		for(int i = 0; i < n; i++) sum[0] += a[i];
		for(int i = 0; i < n; i++) sum[i+1] = sum[i] - a[i];
		
		int ans = a[0];
		for(int i = 0; i < n; i++){
			for(int j = i; j < n; j++){
				ans = max(ans, f(i, j));
			}
		}
		cout << ans << endl;
	}
}