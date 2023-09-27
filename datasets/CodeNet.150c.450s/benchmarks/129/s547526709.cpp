#include <iostream>
using namespace std;

int main(){
	int r,c,i,j;
	cin>>r;
	cin>>c;
	int sum;
	int seat[r+1][c+1];
	for(i=0;i<r;i++){
		sum=0;
		for(j=0;j<c;j++){
			cin>>seat[i][j];
			sum+=seat[i][j];
		}
		seat[i][c]=sum;
	}
	for(i=0;i<=c;i++){
		sum=0;
		for(j=0;j<r;j++){
			sum+=seat[j][i];
		}
		seat[r][i]=sum;
	}
	for(i=0;i<=r;i++){
		for(j=0;j<c;j++){
			cout<<seat[i][j]<<" ";
		}
		cout<<seat[i][j]<<endl;
	}
	return  0;
}