#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	while(1){
		int n,k,b[100100]={},sum=0,sum1=0,ans=0,j=0;
		cin>>n>>k;
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(i<k){
				sum+=b[i];
			}else{
				ans=max(ans,sum);
				sum=sum-b[j]+b[i];
				j++;
			}
		}
	cout<<ans<<endl;
	}
	return 0;
}