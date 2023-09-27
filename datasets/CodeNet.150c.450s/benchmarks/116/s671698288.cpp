#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	while(n!=0||m!=0){
		int a[100100];
		for(int i=0;i<n;i++){
			int aa;
			cin>>aa;
			a[i]=aa;
		}
		int sum=0;
		int max=0;
		for(int i=0;i<m;i++){
		 sum=sum+a[i];
			
		}
		//cout<<sum<<endl;
		max=sum;
		for(int i=0;i<n-m;i++){
		sum=sum-a[i]+a[m+i]	;
		//cout<<sum<<endl;
		if(sum>max) max=sum;
		//cout<<max<<endl;
		}
		cout<<max<<endl;
		cin>>n>>m;
	}
	return 0;
}