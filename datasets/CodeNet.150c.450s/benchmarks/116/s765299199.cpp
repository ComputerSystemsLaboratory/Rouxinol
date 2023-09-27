#include<iostream>
#include<algorithm>
#include<string>
#include <vector>

using namespace std;

int main(){

	int n,k,a[100000],sum,ans,i;

	while(cin>>n>>k,n||k){

	sum=0;

	for(i=0;i<n;i++){
		cin>>a[i];
	}

	for(i=0;i<k;i++){
		sum=sum+a[i];
	}

    ans=sum;
    i=0;

    for(i=k;i<n;i++){
    	sum=sum-a[i-k]+a[i];
    	ans=max(ans,sum);
    }

    cout<<ans<<endl;
	}
}