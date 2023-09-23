#include<iostream>
using namespace std;
int main(){
	int num[1000],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	for(int i=n;i>1;i--){
		cout<<num[i]<<" ";
	}
	cout<<num[1]<<endl;
	return 0;
}