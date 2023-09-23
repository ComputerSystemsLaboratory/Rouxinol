#include <bits/stdc++.h>
using namespace std;

int x;

int mySet(int d,int e){
	int a=0;
	if(d==4){
		if(e==x){
			return 1;
		}else{
			return 0;
		}
}
	for(int i=0;i<=9;i++){
		a+=mySet(d+1,e+i);
	}
	return a;
}

int main(void){
	while(scanf("%d",&x)!=EOF){
		cout<<mySet(0,0)<<endl;
	}
	return 0;
}