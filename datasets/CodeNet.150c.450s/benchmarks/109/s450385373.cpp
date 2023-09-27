#include<iostream>

#define secondMAX (23*60*60+59*60+59)
using namespace std;

int main(){

	int n;
	int h,m,s;
	char gav;
	int table[secondMAX+1];
	int max;

	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=0;i<=secondMAX;i++) table[i]=0;
		for(int i=0;i<n;i++){
			cin>>h>>gav>>m>>gav>>s;
			table[h*60*60+m*60+s]+=1;
			cin>>h>>gav>>m>>gav>>s;
			table[h*60*60+m*60+s]-=1;
		}
		for(int i=1;i<=secondMAX;i++) table[i]+=table[i-1];
		max=0;
		for(int i=0;i<=secondMAX;i++){
			if(max<table[i]) max=table[i];
		}

		cout<<max<<endl;
	}

	return 0;
}