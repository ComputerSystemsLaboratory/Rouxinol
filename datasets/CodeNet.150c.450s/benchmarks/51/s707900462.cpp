#include<iostream>
using namespace std;

int main(){
	bool a[32];
	fill(a,a+32,false);
	int in;
	for(int i=0;i<28;i++){
		scanf("%d",&in);
		a[in]=true;
	}
	for(int i=1;i<=30;i++){
		if(!a[i])printf("%d\n",i);
	}
}