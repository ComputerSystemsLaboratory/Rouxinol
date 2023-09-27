#include<iostream>
using namespace std;

int k[250000][500];

int main(){
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k[0][i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=n-2;j>=i;j--){
			if(k[sum][j]>k[sum][j+1]){
				sum++;
				for(int l=0;l<n;l++){
					k[sum][l]=k[sum-1][l];
				}
				k[sum][j]=k[sum-1][j+1];
				k[sum][j+1]=k[sum-1][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<k[sum][i];
		if(i<n-1){
			cout<<' ';
		}
		else{cout<<endl;}
	}
	cout<<sum<<endl;
	return 0;
}