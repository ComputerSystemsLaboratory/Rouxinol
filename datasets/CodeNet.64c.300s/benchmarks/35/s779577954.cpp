#include<iostream>
#include<vector>
#include<limits.h>
#include<queue>
#include<string>
using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	bool A[n][n];
	
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=0;
		}
	}
	
	for (i=0;i<n;i++){
		int id,deg,dam;
		cin >> id >> deg;
		for (j=0;j<deg;j++){
			cin >> dam;
			A[i][dam-1]=1;
		}
	}
	
	for(i=0;i<n;i++){
		for (j=0;j<n-1;j++){
			cout << A[i][j] <<" ";
		}
		cout << A[i][n-1] <<endl;
	}
	
	return 0;
}