#include<iostream>

using namespace std;

int main(void){
	int stack[10];
	int n=0;
	int d;
	while(cin>>d){
		if(d!=0){
			stack[n++]=d;
		}else{
			cout<<stack[--n]<<endl;
		}
	}
}