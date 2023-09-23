#include<iostream>
#include<sstream>
using namespace std;

int main(void){
	
	int a, b, d, count, z;
		
	while(cin >> a){
	  cin >> b;
		z = a + b;
		d = 10;
	  count = 1;
		while(z / d){
  		count++;
  		d *= 10;
		}
		cout << count << endl;
	}
	
	return 0;
}