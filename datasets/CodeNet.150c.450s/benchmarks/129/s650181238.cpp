#include<iostream>
using namespace std;
int main(){
	
	int r,c,a[100][100],yoko[100]={0},tate[100]={0},total=0,i,j;
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>a[i][j];
			total += a[i][j];
			yoko[i] += a[i][j];
			tate[j] += a[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<a[i][j]<<" ";
			if(j==c-1){
				cout<<yoko[i]<<endl;
			}
		}
	}
	for(int k=0;k<c;k++){
			cout<<tate[k]<<" ";
		}
	cout<<total<<endl;		
			
	return 0;
}