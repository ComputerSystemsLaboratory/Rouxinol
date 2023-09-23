#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned int a , b;
	while(cin >> a >> b){
		cout << (int)(log10(double(a+b))+1) << endl;
	}
	return 0;
}