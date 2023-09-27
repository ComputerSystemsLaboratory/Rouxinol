#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	while(1){
		int n;
		int a;
		int num[5001]={0},ans=0;
		cin>>n;
		if(n==0)break;
		cin>>num[0];
		for(int i=1;i<n;i++){
			cin>>a;
			num[i]=num[i-1]+a;
		}
		ans=num[0];
		for(int i=1;i<n;i++){
			ans=max(ans,num[i]);
			for(int j=0;j<i;j++){
				ans=max(ans,num[i]-num[j]);
			}
		}
		cout<<ans<<endl;
	}
}