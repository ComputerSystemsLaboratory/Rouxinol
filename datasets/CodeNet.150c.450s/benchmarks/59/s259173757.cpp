#include<iostream>
#include<cstring>
using namespace std;

int x[1000][1000];

int main(){
    memset(x,-1,sizeof(x));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[0][i];
	}
	for(int i=0;i<n;i++){
		cout<<x[0][i];
		if(i!=n-1){
			cout<<' ';
		}
		else{
			cout<<endl;
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(x[i-1][i]<x[i-1][j]){
				x[i][j+1]=x[i-1][j];
			}
			else{
				x[i][j]=x[i-1][j];
			}
		}
		for(int j=i+1;j<n;j++){
			x[i][j]=x[i-1][j];
		}
		for(int j=0;j<i+1;j++){
			if(x[i][j]==-1){
				x[i][j]=x[i-1][i];
			}
		}
		for(int j=0;j<n;j++){
			cout<<x[i][j];
			if(j!=n-1){
				cout<<' ';
			}
			else{
				cout<<endl;
			}
		}
	}
	return 0;
}