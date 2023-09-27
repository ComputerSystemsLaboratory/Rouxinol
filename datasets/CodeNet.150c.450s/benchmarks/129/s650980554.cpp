#include<iostream>
using namespace std;
int main(){
	int r,c;
	int a[101][101]={0};
	int x=0;
	int y=0;
	
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			x+=a[i][j];
		}
		a[i][c]=x;
		x=0;
	}
	for(int j=0;j<=c;j++){
		for(int i=0;i<r;i++){
			y+=a[i][j];
		}
		a[r][j]=y;
		y=0;
	}
	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			cout<<a[i][j];
			if(j<c)
				cout<<" ";
		}
		cout<<endl;
	}
}
	