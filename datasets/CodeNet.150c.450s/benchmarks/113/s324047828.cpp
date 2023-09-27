#include<iostream>
using namespace std;

int main(){
	int a,b=1;
	do{
		cin >> a;
		if(a!=0){
			cout << "Case" << " "<< b <<": "<< a<<"\n";
		}
		b++;
	}while(a!=0);
	return 0;
}