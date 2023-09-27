#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int card[50]={0};
	int mem[50]={0};
	int n;
	int r;
	int k = 0 ;
	int p,c;
	while(1){
		cin >>n >>r;
		if ((n==0)&&(r==0)) break;
		for(int i =0;i<n;i++){
			card[i]=i+1;
		}	
		for (int j=0;j<r;j++){
			cin >> p >> c ;
			for(int l=0;l<n;l++){
				mem[l]=card[l];
			}
			for(int m=0;m<p-1;m++){
				card[n-p-c+1+m]=mem[n-p+1+m];
			}
			for(int o=0;o<c;o++){
				card[n-c+o]=mem[n-p-c+1+o];
			}
		}
		cout << card[n-1] <<endl;
		

	}
	
	return 0;
}