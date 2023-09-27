#include<iostream>
using namespace std;
int main(){
	int r,c,a[101][101],b=0,d[101],e=0,f[101];
	int sumx=0,sumy[101]={0},all=0;
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			all+=a[i][j];
		}
	}
	for(int i=0;i<c;++i){
		for(int j=0;j<r;++j){
			sumy[i]+=a[j][i];
		}
	}
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cout<<a[i][j]<<" ";
			sumx+=a[i][j];
		}
		cout<<sumx<<endl;
		sumx=0;
	}
	for(int i=0;i<c;++i){
		cout<<sumy[i]<<" ";
	}
	cout<<all<<endl;
	return 0;
}
