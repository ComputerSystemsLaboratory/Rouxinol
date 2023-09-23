
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int sum,co=0;
		for(int i=1;i<n;i++){
			sum=0;
//			cout<<i<<" ";
			for(int j=i;sum<n;j++){
				sum+=j;
//				cout<<j<<" ";
				if(sum==n)co++;
			}
//			cout<<endl;
		}
		cout<<co<<endl;
	}
}