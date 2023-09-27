#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	while(1){
		long long n,ans=1010101010101;
		cin >> n;
		if(n==0)	break;
		vector<long long> a(n);
		for(int i=0;i<n;i++)	cin >> a[i];
		sort(a.begin(),a.end());
		for(int i=0;i<n-1;i++){
			ans = min(ans,(a[i+1]-a[i]));
		}
		cout << ans << endl;
	}
}
