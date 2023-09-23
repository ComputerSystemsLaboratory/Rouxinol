#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int array[100]={};
	for(int i=0;i<x;i++){
		cin>>array[i];
	}
	for(int i=x-1;i>=0;i--){
		if(i !=x-1) cout<<" ";
		cout<<array[i];
	}
	cout<<endl;
        return 0;
}
