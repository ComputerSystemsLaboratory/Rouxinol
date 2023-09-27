#include<iostream>
using namespace std ;

int main(){
	int n,m,A[100][1000],b[1000],c[1000];
	cin>>n>>m;
	for(int t=0;t<n;t++){
		for(int s=0;s<m;s++){
			cin>>A[t][s];
		}
	}
	for(int t=0;t<m;t++)
		cin>>b[t];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i]+=A[i][j]*b[j];
		}
		cout<<c[i]<<endl;
	}
	return 0;
}