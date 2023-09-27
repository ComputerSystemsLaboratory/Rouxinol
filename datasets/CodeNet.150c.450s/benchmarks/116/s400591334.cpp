#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,k;
	int num[100005];
	while(cin >> n >> k && n && k){
		for(int i=0;i<n;i++) cin >> num[i];
		int ans = 0;
		for(int i=0;i<k;i++) ans += num[i];
		int sum = ans;
		for(int i=1;i<n-k+1;i++){
			sum -= num[i-1];
			sum += num[i+k-1];
			ans = max(ans,sum);
		}
		cout << ans << endl;
	}
}