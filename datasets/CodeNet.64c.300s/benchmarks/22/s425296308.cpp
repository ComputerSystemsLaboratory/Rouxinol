#include <iostream>
using namespace std;

int main(){

	int n,a[10000][3];

	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}

	for(int i=1;i<=n;i++){
		if(a[i][0]*a[i][0]==a[i][1]*a[i][1]+a[i][2]*a[i][2] || a[i][1]*a[i][1]==a[i][0]*a[i][0]+a[i][2]*a[i][2] || a[i][2]*a[i][2]==a[i][1]*a[i][1]+a[i][0]*a[i][0]){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}