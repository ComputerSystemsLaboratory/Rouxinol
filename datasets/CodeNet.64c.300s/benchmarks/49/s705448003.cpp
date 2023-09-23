#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
	int c = a + b;
	int k = 1;
	while(c>=10){
		c /= 10;
		k++;
	}
	cout << k << endl;
	}
}