#include<iostream>
 using namespace std;
int main(){
	int n,i,a[101];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=n;i>0;i--){
		if(i==1){
			cout<<a[1];
		}else{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
		return 0;
}