#include<iostream>

using namespace std;
int S[100000];
int T[100000];

bool serch(int n,int* T,int size){
	for(int i=0;i<size;i++){
		if(T[i]==n)return true;
	}
	return false;
}


int main(){
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++)cin>>S[i];
	cin>>q;
	for(int i=0;i<q;i++)cin>>T[i];
	
	int cnt=0;
	for(int i=0;i<q;i++){
		
		if(serch(T[i],S,n))cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}