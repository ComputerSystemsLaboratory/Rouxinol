#include <iostream>
using namespace std;

int main() {
	long long int a[100][21];
	for(int i=0;i<100;i++){
		for(int j=0;j<21;j++){
			a[i][j]=0;
		}
	}
	int n;
	cin>>n;
	int y;
	cin>>y;
	a[0][y]=1;
	for(int i=1;i<n-1;i++){
		int p;
		cin>>p;
		for(int j=0;j<21;j++){
			if(j+p<=20){a[i][j+p]+=a[i-1][j];}
			if(j-p>=0){a[i][j-p]+=a[i-1][j];}
		}
	}
	int ans;
	cin>>ans;
	cout<<a[n-2][ans]<<endl;
	return 0;
}