#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long int f(int x){
	if(x==0){
		return 1;
	}else{
		return x*f(x-1);
	}
}

int main(){
	int a;
	long long int r;
	while(cin >> a){
		r=f(a);
		cout << r << endl;
	}
	return 0;
}