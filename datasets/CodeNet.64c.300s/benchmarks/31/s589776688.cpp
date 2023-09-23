#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
	int in[31];
	int a;

	for(int i=1;i<31;i++)in[i]=0;
	in[0]=1;
	while(cin>>a)in[a]=1;
	for(int i=1;i<31;i++){
		if(in[i]==0){
			cout<<i<<endl;
		}
	}
	return 0;

}