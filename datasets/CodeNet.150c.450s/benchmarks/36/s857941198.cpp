#include <iostream>
#include <cmath>
using namespace std;
#define NUM 600

int main(){
	long n;
	while(cin >> n){
		long a = NUM/n;
		long b = 0;
		for(long i=1;i<a;i++) b += n*n*n*i*i;
		cout << b << endl;
	}
}