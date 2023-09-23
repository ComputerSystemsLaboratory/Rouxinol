#include<iostream>
using namespace std;

int main(){
	int a,b,n,m;
	
	while(cin>>a>>b){
	n = a+b;
	m = 0;
		while(n!=0){
			m++;
			n /= 10;
			
		}
			
	cout<<m<<endl;
	}
	
	return 0;
}