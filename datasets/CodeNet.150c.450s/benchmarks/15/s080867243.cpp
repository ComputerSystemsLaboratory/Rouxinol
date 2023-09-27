#include<iostream>
using namespace std;
const int NOT_FOUND=-1;
int linearSearch(int key,int A[],int n){
	int i=0;
	A[n]=key;
	while(A[i]!=key){
		i++;
	}
	if(i==n){
		return NOT_FOUND;
	}
	else{
		return i;
	}
}
int main(){

	int n,s;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>s;
	int b[s];
	for(int i=0;i<s;i++){
		cin>>b[i];
	}
	
	int count=0;
	for(int i=0;i<s;i++){
		if(linearSearch(b[i],a,n)!=NOT_FOUND)count++;
	}
	cout<<count<<endl;
	
return 0;
}