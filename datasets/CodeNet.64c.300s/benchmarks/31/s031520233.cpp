#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int num1;
	int test[30];


	for(int i=0;i<30;i++){
		test[i]=0;
	}
	for(int i=0;i<28;i++){
		cin>>num1;
		test[num1-1]=1;
		num1=0;
	}
	for(int i=0;i<30;i++){
		if(test[i]==0){
			cout<<i+1;
			cout<<"\n";
		}
	}
	return 0;
}