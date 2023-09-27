
#include <iostream>
using namespace std;

int main() {
	int a1,a2,a3,a4,b1,b2,b3,b4,asum = 0,bsum = 0;
	cin >> a1 >> a2 >> a3 >> a4;
	cin >> b1 >> b2 >> b3 >> b4;

	asum = a1 + a2 + a3 + a4;
	bsum = b1 + b2 + b3 + b4;
	if(asum > bsum){
		cout << asum << endl;
	}
	else{
		cout << bsum << endl;
	}
	return 0;
}