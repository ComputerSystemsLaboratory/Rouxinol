#include<iostream>
using namespace std;
int main(){
	int n,k;
	while(1){
		int a[100000];
		cin>>n>>k;
		if(n==0&&k==0)break;
		int max=0,sum;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			sum=0;
			if(i+k-1<n){
				for(int j=0;j<k;j++){
					sum+=a[i+j];
				}
				if(max<sum){
					max=sum;
				}
			}
			else break;
		}
		cout<<max<<endl;
	}
}