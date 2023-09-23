#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long GCD(long m,long n){
	long remain;
	if((remain = m % n) == 0)return n;
	else return GCD(n,remain);
}

int main(){
	long a,b;
	while(cin >> a >> b){
		cout << GCD(a, b) << " " << a * b / GCD(a, b) << endl;
	}
}
