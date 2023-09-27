#include <iostream>

using namespace std;

int main(){
	double d;

	while(cin >> d){
	int sum = 0;
	for(int i=0; i*d<600; i++){
	sum = sum + d * (i*d)*(i*d);
	}
	cout << sum << endl;
	}

}