#include<iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;
	while(cin >> a >> b){
	c = a + b;
	cout << (int)log10(c) + 1 << endl;
	}
	
    return 0;
}