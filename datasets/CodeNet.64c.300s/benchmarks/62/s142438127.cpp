#include<iostream>
using namespace std;
int A[100][100];
int B[100];
int Calc(int i,int m)
{
	int value=0;
	for(int j=0;j<m;j++){
		value+=B[j]*A[i][j];
	}
	return value;
}

int main()
{
	int n,m,value;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<m;i++)
		cin>>B[i];
	for(int i=0;i<n;i++){
		cout<<Calc(i,m)<<endl;			
	}
	//cout<<Calc(n-1,m);	
	
	return 0;
}
