#include<iostream>
using namespace std;

int main(void){
	int n,m,sum=0;//n行数、m列数
	cin>>n>>m;
	int a[n][m],v[m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)cin>>a[i][j];
	}
	for(int i=0;i<m;i++)cin>>v[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)sum+=a[i][j]*v[j];
		cout<<sum<<endl;
		sum=0;
	}
}
