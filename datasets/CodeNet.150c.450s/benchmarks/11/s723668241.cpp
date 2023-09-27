#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,S[14]={},H[14]={},C[14]={},D[14]={};
	cin>>n;
	char m;
	int a;

	for(int i=1 ; i<=n ; i++){
		cin>>m>>a;
		if(m=='S'){S[a]=1;}
		if(m=='H'){H[a]=1;}
		if(m=='C'){C[a]=1;}
		if(m=='D'){D[a]=1;}
	}
	    
	for( int i=1 ; i<=13 ; i++){
		if(S[i]==0){cout<<"S "<<i<<endl;}
	}
	
	for( int i=1 ; i<=13 ; i++){
		if(H[i]==0){cout<<"H "<<i<<endl;}
	}
	
	for( int i=1 ; i<=13 ; i++){
		if(C[i]==0){cout<<"C "<<i<<endl;}
	}
	for( int i=1 ; i<=13 ; i++){
		if(D[i]==0){cout<<"D "<<i<<endl;}
	}
	
	return 0;
}