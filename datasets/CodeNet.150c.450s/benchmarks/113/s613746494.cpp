#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[10000];
	int i=0;
	int b=0;
	for(i=0;i<11000;i++){
		cin>>a[i];
		if(a[i]==0){
			break;
		}
		b++;
	}
	for(i=0;i<b;i++){
		cout<<"Case "<<i+1<<": "<<a[i]<<endl;
	}
}