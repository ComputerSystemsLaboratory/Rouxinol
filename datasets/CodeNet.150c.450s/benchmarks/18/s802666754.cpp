#include<iostream>
using namespace std;

int main(){
	int week,i;
	int debt = 100000;

	cin >> week;

	for(i=0;i<week;i++){
		debt=debt*105/100;
		if(debt%1000){
			debt = debt - (debt%1000) + 1000;
		}
	}
	
	cout << debt << endl;
}