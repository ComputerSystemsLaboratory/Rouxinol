/*AOJ 0014*/

#include<iostream>
using namespace std;

double f(double x){
	return x*x;
}

int main(){

	int sum = 0;
	int d;

	while(cin>>d){
		sum = 0;

		for(int i=1;d*i<600;i++){
			sum += f(i*d)*d;

		}

		cout<<sum<<endl;

	}

	return 0;
}