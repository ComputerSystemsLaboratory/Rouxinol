#include<iostream>
using namespace std;
int main(){
	char b[52];
	int n,i,a[52];
	int S[52]={0},H[52]={0},C[52]={0},D[52]={0};

	cin>>n;
	for(i=1;i<=n;i++){
		cin>>b[i]>>a[i];
	}
	for(i=1;i<=n;i++){
		if(b[i]=='S')S[a[i]]=a[i];
		else if(b[i]=='H')H[a[i]]=a[i];
		else if(b[i]=='C')C[a[i]]=a[i];
		else if(b[i]=='D')D[a[i]]=a[i];
	}
	for(i=1;i<=13;i++){
		if(S[i]==0)cout<<"S "<<i<<endl;
	}
	for(i=1;i<=13;i++){
		if(H[i]==0)cout<<"H "<<i<<endl;
	}
	for(i=1;i<=13;i++){
		if(C[i]==0)cout<<"C "<<i<<endl;
	}
	for(i=1;i<=13;i++){
		if(D[i]==0)cout<<"D "<<i<<endl;
	}

	return 0;
}