#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	long n,UENINIGERUDE,SEISU[10000],GOKEI=0,SAISYO;
	cin>>n;
	SAISYO=n-1;
	for(int i=0;i<n;i++){
		cin>>SEISU[i];
		}
	for(int i=0;i<=n;i++){
		for(int j=i+1;j<n;j++){
			if(SEISU[i]<SEISU[j]){
				UENINIGERUDE=SEISU[i];
				SEISU[i]=SEISU[j];
				SEISU[j]=UENINIGERUDE;
				}
			}
		}
	for(int i=0;i<n;i++){
		GOKEI+=SEISU[i];
		}
	cout<<SEISU[SAISYO]<<" "<<SEISU[0]<<" "<<GOKEI<<endl;
	return 0;
}