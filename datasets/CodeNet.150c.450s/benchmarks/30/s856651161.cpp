#include<iostream>
#include<algorithm>
using namespace std;

int k[1000][1000];

int main(){
	int n,MIN,MIN2,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k[0][i];
	}
	for(int i=0;i<n-1;i++){
		MIN=1000000;
		MIN2=0;
		for(int j=i+1;j<n;j++){
			if(k[i][j]<MIN){
				MIN=k[i][j];
				MIN2=j;
			}
		}
		for(int j=0;j<n;j++){
			k[i+1][j]=k[i][j];
		}
		if(MIN<k[i][i]){
			k[i+1][i]=k[i][MIN2];
			k[i+1][MIN2]=k[i][i];
			sum++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<k[n-1][i];
		if(i==n-1){
			cout<<endl;
		}
		else{
			cout<<' ';
		}
	}
	cout<<sum<<endl;
	return 0;
}