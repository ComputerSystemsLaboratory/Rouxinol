#include<iostream>
using namespace std;

int main(){
	int n;
	int a[100];
	int exchanges=0;
	bool flag = true;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(flag){
		flag = false;
		for(int j=n-2;j>=0;j--){
			if(a[j]>a[j+1]){
				int tmp;
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				flag = true;
				exchanges++;
			}
		
		}
	}
	for(int i=0;i<n;i++){
		if(i>0) cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	cout<<exchanges<<endl;
	return 0;	
}