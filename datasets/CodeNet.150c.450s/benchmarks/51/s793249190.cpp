#include<iostream>
using namespace std;

int main(){
	int n;
	bool s[32];
	for(int i=0;i<32;i++)s[i]=false;
	for(int i=0;i<28;i++){
		scanf("%d",&n);
		s[n]=true;
	}
	for(int i=1;i<31;i++){
		if(!s[i])printf("%d\n",i);
	}
}