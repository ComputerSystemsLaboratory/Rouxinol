#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	int sum;
	int i;
	cin>>n;
	sum=100000;
	for(i=1;i<=n;i++){
		sum*=1.05;
		if(sum%1000)	sum=sum-sum%1000+1000;
	}
	cout<<sum<<endl;
	return 0;
	
}
