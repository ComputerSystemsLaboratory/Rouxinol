#include<iostream>
using namespace std;
int main(){
	int a[45];
	a[0]=1;
	a[1]=1;
	int n,i;
	cin>>n;
	if(n>=2){
		for(i=2;i<=n;i++){
			a[i]=a[i-1]+a[i-2];
		}
	}
	cout<<a[n]<<endl;
	return 0;
}