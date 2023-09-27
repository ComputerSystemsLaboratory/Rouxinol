#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <utility>
typedef unsigned long ul;

using namespace std;

int gcd(ul a, ul b);

int main(){
	ul a, b, gcd_num;
	while(cin >> a >> b){
		if(a < b){
			swap(a,b);
		}
		gcd_num = gcd(a, b);
		cout << gcd_num << " " << (a*b)/gcd_num << endl;
	}
}

int gcd(ul a, ul b){
	ul r;
	while((r = a % b) != 0){
		a = b;
		b = r;
	}
	return b;
}