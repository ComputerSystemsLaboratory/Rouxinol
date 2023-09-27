#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,input,max=0,level=1;
	int arr[2010]={0};
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>input;
		max+=input;
		for(int i=1;i<=max-input;i++){
			if(arr[i]!=0&&arr[i]!=level){
				if(arr[i+input]==0)arr[i+input]=level;
			}
		}
		arr[input]=level;
		level++;
	}
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>input;
		if(arr[input]==0)cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
	return 0;
}
