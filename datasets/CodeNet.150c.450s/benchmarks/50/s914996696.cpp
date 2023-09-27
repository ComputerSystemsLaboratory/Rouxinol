#include <iostream>
#define add(coinvalue) changecoins+=(int)change/coinvalue;change%=coinvalue;
using namespace std;

int main() {
	// your code goes here
	for(;;){
		int fee;
		cin >> fee;
		if(fee==0)
			break;
		int change=1000-fee;
		int changecoins=0;
		add(500)
		add(100)
		add(50)
		add(10)
		add(5)
		add(1)
		cout << changecoins << endl;
	}
	return 0;
}