#include<iostream>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		int ans=0;
		int mini=1001;
		int maxi=0;
		for(int i = 0;i<n;i++){
			int a;
			cin>>a;
			ans+=a;
			mini=min(mini,a);
			maxi=max(maxi,a);
		}
		cout<<(ans-maxi-mini)/(n-2)<<endl;
	}
	return 0;
}