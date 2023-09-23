#include <iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>a;
		num[i]=a;
	}
	for(int j=n-1;j>=0;j--){
		if(j==0){
		  cout<<num[j]<<endl;
		}
		else{
		cout<<num[j]<<" ";
		}
		
	}
	return 0;


}