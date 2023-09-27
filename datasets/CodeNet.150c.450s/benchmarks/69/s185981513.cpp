//AOJ0033
#include<iostream>
using namespace std;
int table[10];

bool ok(int i,int left,int right){
	if(i>=10){
		return true;
	}
	if(left<table[i]){
		if(ok(i+1,table[i],right))return true;
	}
	
	if(right<table[i]){
		if(ok(i+1,left,table[i]))return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	for(int set=0;set<n;set++){
		for(int i=0;i<10;i++)cin>>table[i];
		if(ok(0,0,0))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	}
	return 0;
}