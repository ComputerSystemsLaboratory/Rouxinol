#include <iostream>
#include <algorithm>


#define rep(i,n) for(i=0;i<(n);i++)

using namespace std;

int main() {
	int n,ans=0,i,count=0,j,flag=0;
	
	while(1){
		cin>>n;
		if(n==0){
			break;
		}
		for(i=1;i<n;i++){
			for(j=i;j<n;j++){
				ans+=j;
				if(ans==n && flag==1){
					count++;
					break;
				}
				if(ans>n){
					break;
				}
				flag=1;
			}
			ans=0;
			flag=0;
		}
		cout<<count<<endl;
		count=0;
	}
	
	// your code goes here
	return 0;
}