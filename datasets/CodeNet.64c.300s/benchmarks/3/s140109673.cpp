#include<iostream>
using namespace std;
int main(){
	int a,b[100],c;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b[i];
	}
	for(int i=a-1;i>=0;i--){
		cout<<b[i];
		if(i==0)break;
		cout<<" ";
	}
	cout<<endl;
}