#include<iostream>
using namespace std;
int main(){
	int r=0,l,k[100]={0},b=0,c=0,i,x[100]={0},j,math[100][100];
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>math[i][j];
			x[i]+=math[i][j];
			k[j]+=math[i][j];
			b+=math[i][j];
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<math[i][j]<<" ";
		}
		cout<<x[i];
		cout<<endl;
	}
	for(l=0;l<c;l++){
	cout<<k[l]<<" ";
	}
	cout<<b;
	cout<<endl;
	
	return 0;
}