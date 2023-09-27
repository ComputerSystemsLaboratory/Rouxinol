#include<iostream>
using namespace std;

int main(){
	int r,c;
	int a[101][101],csum[101],rsum[101],sum=0;
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			csum[i]+=a[i][j];
			sum+=a[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			rsum[i]+=a[j][i];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
			if(j==c-1)
				cout<<csum[i]<<endl;
		}
		if(i==r-1){
			for(int k=0;k<c;k++){
				cout<<rsum[k]<<" ";
				if(k==c-1)
					cout<<sum<<endl;
			}
		}
	}
	return 0;
}