#include<iostream>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int a[r+1][c+1];
	a[r][c]=0;
	for(int i=0;i<r;i++) a[i][c]=0;
	for(int i=0;i<c;i++) a[r][i]=0;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			a[r][j]+=a[i][j];
			a[i][c]+=a[i][j];
			a[r][c]+=a[i][j];
		}
	}
	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			if(j==c){
				cout<<a[i][j]<<endl;
			}else{
				cout<<a[i][j]<<" ";
			}
		}
	}
	return 0;
}