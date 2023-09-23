#include<cstdio>
#include<iostream>

using namespace std;

int main(void){

	int o[31]={0};
	int inp;

	for(int i=0;i<28;i++){
		cin>>inp;
		o[inp]++;
	}

	for(int i=1;i<31;i++){
		if(o[i]==0) cout<<i<<endl;
	}

    return 0;
}