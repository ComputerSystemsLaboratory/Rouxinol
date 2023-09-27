#include<iostream>
using namespace std;

int main(){
	int a;
	while(cin>>a){
		int b,sum;
		cin>>b;
		
		sum = a+b;
		int degit=1;
		while(1){
			if(sum/10==0){
				break;
			}
			sum = sum/10;
			degit++;
		}
		cout<<degit<<endl;
	}
	return 0;
}