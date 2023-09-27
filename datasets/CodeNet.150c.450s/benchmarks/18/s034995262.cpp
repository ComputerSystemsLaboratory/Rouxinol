#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <utility>
#include <string>
typedef unsigned long ul;

using namespace std;

int main(){
	ul x, r, n;
	cin >> n;
	x = 100000;
	while(n--){
		x = x * 1.05;
		if((r = x % 1000) != 0){
			x = x + 1000 - r;
		}
	}
	cout << x << endl;
}