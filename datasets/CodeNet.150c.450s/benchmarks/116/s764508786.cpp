#include<iostream>

using namespace std;

#define MAX 100000

int main(){

	int n,k,a[MAX];
	long long num,max;

	while(1){

		cin>>n>>k;
		if(n==0&&k==0) break;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		num=0;
		for(int j=0;j<k;j++){
			num+=a[j];
		}
		max=num;

		for(int i=0;i<n-k;i++){
			num-=a[i];
			num+=a[i+k];
			max=(max<num)?num:max;
		}
		
		cout<<max<<endl;
		
	}

	return 0;
}