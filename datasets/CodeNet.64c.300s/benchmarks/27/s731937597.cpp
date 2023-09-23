#include<iostream>
using namespace std;

int main(){
	int n,x,a[100];
	int sum,cnt,p;
	for(;;){
		sum=0;
		cnt=0;
		cin>>n>>x;
		if(n==0&&x==0) break;
		for(int i=0;i<n;i++){
			a[i]=i+1;
		}
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					p=k;
					sum=a[i]+a[j]+a[k];
					if(sum==x)
						cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}