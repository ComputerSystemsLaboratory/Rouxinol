#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){
	int stack[10];
	int pt=0, n;
	while(cin >> n){
		if(n == 0) {
			cout << stack[pt-1] << endl;
			pt--;
		}
		else {
			stack[pt] = n;
			pt++;
		}
	}
	return 0;
}