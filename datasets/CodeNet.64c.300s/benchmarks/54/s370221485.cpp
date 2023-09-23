#include<iostream>
using namespace std;
int main()
{
	int n,a[100]={0},i,j,k,m1,m2;
	long long a1[101][21]={0};
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	k=a[0];
	a1[0][k]+=1;
	for(i=1;i<n-1;i++){
		for(j=0;j<21;j++){
			if(a1[i-1][j]!=0){
				m1=j+a[i];
				m2=j-a[i];
				if(m1<=20){
					a1[i][m1]+=a1[i-1][j];
				}
				if(m2>=0){
					a1[i][m2]+=a1[i-1][j];
				}
			}
		}
	}
	m1=a[n-1];
	cout<<a1[n-2][m1]<<endl;
	return 0;
}