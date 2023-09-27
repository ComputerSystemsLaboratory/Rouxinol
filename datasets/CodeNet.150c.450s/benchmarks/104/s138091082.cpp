#include<iostream>

using namespace std;
int data[40];
int main(){

	for(int i=0;i<40;i++)data[i]=i;
	int w;
	int n;
	cin>>w;
	cin>>n;
	for(int i=0;i<n;i++){
		char ch;
		int a,b;
		cin>>a;
		cin>>ch;
		cin>>b;
		int t=data[a];
		data[a]=data[b];
		data[b]=t;
	}
	
	for(int i=1;i<=w;i++)cout<<data[i]<<endl;
}