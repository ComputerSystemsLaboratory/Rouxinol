
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int n,j,r,minv,maxv;
	cin>>n;
	cin>>minv;
	maxv=-1000000000;
	for(j=1;j<n;j++){
		cin>>r;
		if(maxv<r-minv){
			maxv=r-minv;
		}if(minv>r){
			minv=r;
		}
	}cout<<maxv<<endl;
	return 0;
}

