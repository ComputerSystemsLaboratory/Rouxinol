#include<iostream>
using namespace std;
	long long a[200][200];
	long long b[200][200];
	long long c[200][200];
int main(){
	int n,m,l;
	cin>>n>>m>>l;
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=l;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=l;j++){
			long sum=0;
			for(int k=1;k<=m;k++){
				sum+=a[i][k]*b[k][j];
			}
			if(j>1)cout<<" ";
			cout<<sum;
			if(j==l)cout<<endl;
		}
	}
}