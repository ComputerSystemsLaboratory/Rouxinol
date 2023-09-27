#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int k[1000][1000][2];
int m[1000];
int o[1000];
int v[36];
string L;

int main(){
	int n,e,MIN,MIN2,sum=0;
	char T[11]="0123456789";
	char S[5]="SHCD";

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>L;
		for(int j=0;j<10;j++){
			if(L[1]==T[j]){
				k[0][i][0]=j;
			}
		}
		for(int j=0;j<4;j++){
			if(L[0]==S[j]){
				k[0][i][1]=j;
			}
		}
	}
	e=0;
	for(int i=1;i<=9;i++){
		for(int j=0;j<n;j++){
			if(k[0][j][0]==i){
				m[e]=i*4+k[0][j][1];
				e++;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<S[m[i]%4]<<T[m[i]/4];
		if(i<n-1){
			cout<<' ';
		}
		else{
			cout<<endl;
		}
	}
	cout<<"Stable"<<endl;

	//sort.

	for(int i=0;i<n-1;i++){
		MIN=1000000;
		MIN2=0;
		for(int j=i+1;j<n;j++){
			if(k[i][j][0]<MIN){
				MIN=k[i][j][0];
				MIN2=j;
			}
		}
		for(int j=0;j<n;j++){
			k[i+1][j][0]=k[i][j][0];
			k[i+1][j][1]=k[i][j][1];
		}
		if(MIN<k[i][i][0]){
			k[i+1][i][0]=k[i][MIN2][0];
			k[i+1][MIN2][0]=k[i][i][0];
			k[i+1][i][1]=k[i][MIN2][1];
			k[i+1][MIN2][1]=k[i][i][1];
		}
	}
	for(int i=0;i<n;i++){
		cout<<S[k[n-1][i][1]]<<T[k[n-1][i][0]];
		o[i]=k[n-1][i][0]*4+k[n-1][i][1];
		if(i==n-1){
			cout<<endl;
		}
		else{
			cout<<' ';
		}
	}
	for(int i=0;i<n;i++){
		if(o[i]!=m[i]){
			cout<<"Not stable"<<endl;
			goto Exit2;
		}
	}
	cout<<"Stable"<<endl;
	goto Exit2;
Exit2:;
	return 0;
}