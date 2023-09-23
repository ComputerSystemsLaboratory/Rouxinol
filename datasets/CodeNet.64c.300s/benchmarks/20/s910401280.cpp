#include <iostream>
using namespace std;

int f(int x){
	return x*x;
}

int main(void){
	int dx;
	while(cin>>dx){
		int sum=0;
		for(int i=1;i*dx<600;i++){
			sum+=dx*f(i*dx);
		}
		cout<<sum<<endl;
	}
}