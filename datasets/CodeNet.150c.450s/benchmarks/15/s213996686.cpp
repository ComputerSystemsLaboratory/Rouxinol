#include <iostream>
using namespace std;

int linear(int key,int a[],int n){

	a[n]=key;
	int i=0;
	
	while(a[i]!=key){
		i++;
	}
	if(i==n){
		return -1;
	}

	return i;
}

int main(){
	
	int n;
	cin>>n;
	
	int s[10001];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}

	int x;
	cin>>x;
	
	int t[500];
	for(int i=0;i<x;i++){
		cin>>t[i];
	}

	int count=0;
	
	for(int i=0;i<x;i++){
		if(linear(t[i],s,n)!=(-1)){
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}
	