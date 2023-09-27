#include<iostream>
using namespace std;
int main(){
	int r,c,num[101][101],i,j;
	int yoko[101],tate[101];
	int tans=0,yans=0;
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>num[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			tans=tans+num[i][j];
		}
		num[i][c]=tans;
		tans=0;
	}
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			yans=yans+num[i][j];
		}
		num[r][j]=yans;
		yans=0;
	}
	for(j=0;j<c;j++){yans=yans+num[r][j];}
	num[r][c]=yans;
	for(i=0;i<=r;i++){
		for(j=0;j<=c;j++){
			if(j==c){
				cout<<num[i][j];
			}else{
		    	cout<<num[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}