#include <bits/stdc++.h>
using namespace std;

int x,y,z[51]={};

int mySet(int d,int e){
	int a=0;
	for(int i=1;i<d;i++){
		if(z[i]>=z[i+1]){
			return 0;
		}
	}
	if(d==x){
		if(e==y){
			return 1;
		}else{
			return 0;
		}
	}
	for(int j=0;j<=9;j++){
		z[d+1]=j;
		a+=mySet(d+1,e+j);
	}
	return a;
}

int main(void){
	while(1){
		cin>>x>>y;
		if(x==0&&y==0){
			break;
		}else{
			cout<<mySet(0,0)<<endl;
		}
	}
	return 0;
}