#include <iostream>
using namespace std;

int main() {
	long n,a;
	cin>>n;
	a = n;
	while(true){
		n = n-1;
		if (n == 0)break;
		a = a*n;
	}cout<<a<<endl;
}