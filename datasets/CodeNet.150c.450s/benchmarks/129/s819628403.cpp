#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
	int r,c,i,j,sum,SUM;
	int A[100][100];

	cin>>r>>c;
	
	for( i=0 ; i<r ; i++){
		sum=0;
		for( j=0 ; j<c ; j++){
			cin>>A[i][j];
			sum=sum+A[i][j];
			cout<<A[i][j]<<" ";
		}
		cout<<sum<<endl;
		SUM+=sum;
	}
	
	for( j=0 ; j<c ; j++){
		sum=0;
		for( i=0 ; i<r ; i++){
			
			sum=sum+A[i][j];
			
		}
		cout<<sum<<" ";
	}
	cout<<SUM<<endl;
	
	return 0;
}