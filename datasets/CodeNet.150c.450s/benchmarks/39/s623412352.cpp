#include <iostream>
using namespace std;

int S(int a,int b){
	return a*b;
}

int L(int a,int b){
	return a*2+b*2;
}


int main() {
	int a,b;
	cin>>a>>b;
	
	cout<<S(a,b)<<" "<<L(a,b)<<endl;
	
	return 0;
}