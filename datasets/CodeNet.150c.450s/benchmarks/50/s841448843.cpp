#include<iostream>
using namespace std;
int main(){
	int cut=0;
	int a;
	int b;
	while(1){
	cin>>a;
		cut=0;
		if(a==0){
			break;
		}
	b=1000-a;
	cut+=b/500;
	b=b%500;
	cut+=b/100;
	b=b%100;
	cut+=b/50;
	b=b%50;
	cut+=b/10;
	b=b%10;
	cut+=b/5;
	b=b%5;
	cut+=b;
	cout<<cut<<endl;
	}
	return 0;
}