#include<iostream>
#include<algorithm>
#include<string>
#include <vector>

using namespace std;

int main(){

	int n,a[1000],ans,temp;

	while(cin>>n,n){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ans=1000000;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>=a[j]){
					temp=a[i]-a[j];
					ans=min(ans,temp);
				}
				else{
					temp=a[j]-a[i];
					ans=min(ans,temp);
				}
			}

		}
		cout<<ans<<endl;
	}
}