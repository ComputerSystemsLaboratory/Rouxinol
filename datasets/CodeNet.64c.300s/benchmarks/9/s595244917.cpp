#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	double weeks=0;
	double debit=100.0;
	
	
	cin >> weeks;
	
	for(int i=0; i<weeks;i++){
		debit=debit+debit*0.05;
		debit=ceil(debit);
	}
	
	int out =debit*1000;
	
	cout <<out<<endl;
	
	
	return 0;
}