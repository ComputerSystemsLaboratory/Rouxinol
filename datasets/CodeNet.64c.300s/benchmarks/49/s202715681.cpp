//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0002&lang=jp
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void digit(int a, int b){
	int counter = 1;
	int c = a+b;
	while(c/10 > 0){
		counter++;
		c /= 10;
	}
	cout << counter << endl;
	return;
}


int main(){
	int a,b;
	while(cin >> a >> b){
		digit(a,b);
	}
	return 0;
}