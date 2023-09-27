#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){
	int s, n, d;
	while(cin >> d){
		s = 0;
		for(int i=d; i<=600-d; i+=d) s += i*i*d;
		cout << s << endl;
	}
	return 0;
}