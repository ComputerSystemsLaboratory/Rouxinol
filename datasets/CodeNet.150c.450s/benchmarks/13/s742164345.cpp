#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(void){
	string x,y,z;
	cin >> x >> y;

	z = x + x;
	if(z.find(y) != -1
		){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}
