#include<iostream>
#include<algorithm>
using namespace std;
int a[100000];
int main(){
	int i,i2,sum,ans,n,k;
	cin>>n>>k;
	while(n!=0){
		ans=0;
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n-k;i++){
			sum=a[i];
			for(i2=1;i2<k;i2++)sum+=a[i+i2];
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
		cin>>n>>k;
	}
}