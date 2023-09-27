#include<iostream>
#include<algorithm>
using namespace std;

int a[100000];
int main(){
	int n,k;
	while(cin>>n>>k,n||k){
		int sum=0,ans= -10000*100000;
		for(int i=0;i<k;i++){
			cin>>a[i];
			sum += a[i];
		}
		ans=max(ans,sum);
		for(int i=k;i<n;i++){
			sum -= a[i-k];
			cin>>a[i];
			sum += a[i];
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}
	return 0;
}