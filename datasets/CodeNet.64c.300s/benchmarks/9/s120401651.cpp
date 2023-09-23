#include<iostream>
using namespace std;
int main(){
	int a=100000,n;
	cin>>n;
	for(int i=0;i<n;i++){
		a=a*21/20;
		if(a%1000>0){
			a=a/1000;
			a=a+1;
			a=a*1000;
		}
	}
	cout<<a<<endl;
}