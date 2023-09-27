#include <iostream>
using namespace std;

int a[100002];

int main(void){
	int n,k;

	while(cin>>n>>k,n){
		for(int i=0;i<n;i++) cin>>a[i];

		int left=0, right=0, sum=0, ans=-999999999;

		while(right<n){
			while(right-left<k) sum += a[right++];
			ans = max(ans,sum);
			sum -= a[left++];
		}

		cout<<ans<<endl;
	}

	return 0;
}